#ifndef MBGL_STYLE_TYPES
#define MBGL_STYLE_TYPES

#include <mbgl/util/enum.hpp>

#include <string>
#include <array>

namespace mbgl {

// Stores a premultiplied color, with all four channels ranging from 0..1
typedef std::array<float, 4> Color;

// -------------------------------------------------------------------------------------------------

enum class StyleLayerType : uint8_t {
    Unknown,
    Fill,
    Line,
    Symbol,
    Raster,
    Background
};

MBGL_DEFINE_ENUM_CLASS(StyleLayerTypeClass, StyleLayerType, {
    { StyleLayerType::Unknown, "unknown" },
    { StyleLayerType::Fill, "fill" },
    { StyleLayerType::Line, "line" },
    { StyleLayerType::Symbol, "symbol" },
    { StyleLayerType::Raster, "raster" },
    { StyleLayerType::Background, "background" },
    { StyleLayerType(-1), "unknown" },
});

// -------------------------------------------------------------------------------------------------

enum class SourceType : uint8_t {
    Vector,
    Raster,
    GeoJSON,
    Video
};

MBGL_DEFINE_ENUM_CLASS(SourceTypeClass, SourceType, {
    { SourceType::Vector, "vector" },
    { SourceType::Raster, "raster" },
    { SourceType::GeoJSON, "geojson" },
    { SourceType::Video, "video" },
});

// -------------------------------------------------------------------------------------------------

enum class WindingType : bool {
    EvenOdd,
    NonZero,
};

MBGL_DEFINE_ENUM_CLASS(WindingTypeClass, WindingType, {
    { WindingType::EvenOdd, "even-odd" },
    { WindingType::NonZero, "non-zero" },
});

// -------------------------------------------------------------------------------------------------

enum class CapType : uint8_t {
    Round,
    Butt,
    Square,
};

MBGL_DEFINE_ENUM_CLASS(CapTypeClass, CapType, {
    { CapType::Round, "round" },
    { CapType::Butt, "butt" },
    { CapType::Square, "square" },
});

// -------------------------------------------------------------------------------------------------

enum class JoinType : uint8_t {
    Miter,
    Bevel,
    Round
};

MBGL_DEFINE_ENUM_CLASS(JoinTypeClass, JoinType, {
    { JoinType::Miter, "miter" },
    { JoinType::Bevel, "bevel" },
    { JoinType::Round, "round" },
});

// -------------------------------------------------------------------------------------------------

enum class TranslateAnchorType : bool {
    Map,
    Viewport
};

MBGL_DEFINE_ENUM_CLASS(TranslateAnchorTypeClass, TranslateAnchorType, {
    { TranslateAnchorType::Map, "map" },
    { TranslateAnchorType::Viewport, "viewport" },
});

// -------------------------------------------------------------------------------------------------

enum class RotateAnchorType : bool {
    Map,
    Viewport,
};

MBGL_DEFINE_ENUM_CLASS(RotateAnchorTypeClass, RotateAnchorType, {
    { RotateAnchorType::Map, "map" },
    { RotateAnchorType::Viewport, "viewport" },
});

// -------------------------------------------------------------------------------------------------

enum class PlacementType : bool {
    Point,
    Line,
};

MBGL_DEFINE_ENUM_CLASS(PlacementTypeClass, PlacementType, {
    { PlacementType::Point, "point" },
    { PlacementType::Line, "line" },
});

// -------------------------------------------------------------------------------------------------

enum class RotationAlignmentType : bool {
    Map,
    Viewport,
};

MBGL_DEFINE_ENUM_CLASS(RotationAlignmentTypeClass, RotationAlignmentType, {
    { RotationAlignmentType::Map, "map" },
    { RotationAlignmentType::Viewport, "viewport" },
});

// -------------------------------------------------------------------------------------------------

enum class TextJustifyType : uint8_t {
    Center,
    Left,
    Right
};

MBGL_DEFINE_ENUM_CLASS(TextJustifyTypeClass, TextJustifyType, {
    { TextJustifyType::Center, "center" },
    { TextJustifyType::Left, "left" },
    { TextJustifyType::Right, "right" },
});

// -------------------------------------------------------------------------------------------------

enum class TextAnchorType : uint8_t {
    Center,
    Left,
    Right,
    Top,
    Bottom,
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight
};

MBGL_DEFINE_ENUM_CLASS(TextAnchorTypeClass, TextAnchorType, {
    { TextAnchorType::Center, "center" },
    { TextAnchorType::Left, "left" },
    { TextAnchorType::Right, "right" },
    { TextAnchorType::Top, "top" },
    { TextAnchorType::Bottom, "bottom" },
    { TextAnchorType::TopLeft, "top-left" },
    { TextAnchorType::TopRight, "top-right" },
    { TextAnchorType::BottomLeft, "bottom-left" },
    { TextAnchorType::BottomRight, "bottom-right" }
});

// -------------------------------------------------------------------------------------------------

enum class TextTransformType : uint8_t {
    None,
    Uppercase,
    Lowercase,
};

MBGL_DEFINE_ENUM_CLASS(TextTransformTypeClass, TextTransformType, {
    { TextTransformType::None, "none" },
    { TextTransformType::Uppercase, "uppercase" },
    { TextTransformType::Lowercase, "lowercase" },
});

}

#endif

