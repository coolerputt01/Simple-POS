// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
static_assert(1 == SLINT_VERSION_MAJOR && 15 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.15.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class Signup;

class SharedGlobals;

class TextLabel_root_1;

class InputText_root_2;

class TextLabel_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_1_x;
    slint::private_api::Property<float> root_1_y;
    slint::cbindgen_private::SimpleText root_1 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class InputText_root_2 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_2_x;
    slint::private_api::Property<float> root_2_y;
    slint::cbindgen_private::Rectangle root_2 = {};
    slint::cbindgen_private::Rectangle rectangle_3 = {};
    slint::cbindgen_private::TextInput textinput_4 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class FluentPalette_16 {
    public:
    slint::private_api::Property<slint::Brush> background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<bool> dark_color_scheme;
    slint::private_api::Property<slint::Brush> selection_foreground;
    FluentPalette_16 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<FluentPalette_16> global_FluentPalette_16 = std::make_shared<FluentPalette_16>(this);
    SharedGlobals (){
        global_FluentPalette_16->init();
    }
};

class Signup {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> root_5_empty_8_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_5_empty_8_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_5_empty_8_layoutinfo_v;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_5_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_5_layoutinfo_v;
    TextLabel_root_1 textlabel_9;
    InputText_root_2 inputtext_10;
    TextLabel_root_1 textlabel_11;
    InputText_root_2 inputtext_12;
    TextLabel_root_1 textlabel_13;
    InputText_root_2 inputtext_14;
    slint::cbindgen_private::WindowItem root_5 = {};
    slint::cbindgen_private::Rectangle rectangle_6 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_7 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<Signup>;
    ~Signup ();
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_16;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Signup>;
    friend class slint::private_api::WindowAdapterRc;
};

inline auto TextLabel_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)));
    self->root_1.font_size.set(18);
    self->root_1.font_weight.set(static_cast<int>(600));
    self->root_1.color.set_constant();
    self->root_1.font_size.set_constant();
    self->root_1.font_weight.set_constant();
    self->root_1.horizontal_alignment.set_constant();
    self->root_1.vertical_alignment.set_constant();
}

inline auto TextLabel_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto TextLabel_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto TextLabel_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1.height.get()), float(self->root_1.width.get()), float(self->root_1_x.get()), float(self->root_1_y.get())));
    }
    return {};
}

inline auto TextLabel_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto TextLabel_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->root_1.text.get();
    }
    return {};
}

inline auto TextLabel_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto TextLabel_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto TextLabel_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto InputText_root_2::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_2.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->rectangle_3.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)));
    self->textinput_4.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)));
    self->textinput_4.enabled.set(true);
    self->textinput_4.font_size.set(16);
    self->textinput_4.height.set(40);
    self->textinput_4.read_only.set(false);
    self->textinput_4.selection_background_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278221012e9)).color());
    self->textinput_4.selection_foreground_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_16->selection_foreground.get().color();
                        });
    self->textinput_4.single_line.set(true);
    self->textinput_4.text_cursor_width.set(1);
    self->textinput_4.width.set(390);
    self->root_2.background.set_constant();
    self->rectangle_3.background.set_constant();
    self->textinput_4.color.set_constant();
    self->textinput_4.enabled.set_constant();
    self->textinput_4.font_family.set_constant();
    self->textinput_4.font_italic.set_constant();
    self->textinput_4.font_size.set_constant();
    self->textinput_4.font_weight.set_constant();
    self->textinput_4.height.set_constant();
    self->textinput_4.horizontal_alignment.set_constant();
    self->textinput_4.input_type.set_constant();
    self->textinput_4.letter_spacing.set_constant();
    self->textinput_4.page_height.set_constant();
    self->textinput_4.read_only.set_constant();
    self->textinput_4.selection_background_color.set_constant();
    self->textinput_4.single_line.set_constant();
    self->textinput_4.text_cursor_width.set_constant();
    self->textinput_4.vertical_alignment.set_constant();
    self->textinput_4.width.set_constant();
    self->textinput_4.wrap.set_constant();
}

inline auto InputText_root_2::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto InputText_root_2::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto InputText_root_2::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(self->root_2_x.get()), float(self->root_2_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(2), float(400), float(0), float(5)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(390), float(5), float(-12)));
    }
    return {};
}

inline auto InputText_root_2::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 2: return slint::cbindgen_private::AccessibleRole::TextInput;
    }
    return {};
}

inline auto InputText_root_2::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (true ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ReadOnly): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return self->textinput_4.text.get();
    }
    return {};
}

inline auto InputText_root_2::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto InputText_root_2::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto InputText_root_2::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline FluentPalette_16::FluentPalette_16 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_16::init () -> void{
    (void)this->globals;
    this->background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.280032284e9) : slint::Color::from_argb_encoded(+4.29463833e9)));
                        });
    this->color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->globals->window().window_handle().color_scheme();
                        });
    this->dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_16_color_scheme = this->color_scheme.get();;return (! (tmp_FluentPalette_16_color_scheme == slint::cbindgen_private::ColorScheme::Unknown) ? (tmp_FluentPalette_16_color_scheme == slint::cbindgen_private::ColorScheme::Dark) : (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark)); }();
                        });
    this->selection_foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9)));
                        });
}

inline const slint::private_api::ItemTreeVTable Signup::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Signup>, slint::private_api::dealloc };

inline auto Signup::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->textlabel_9.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 3 - 1, tree_index_of_first_child + 9 - 1);
    this->inputtext_10.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 4 - 1, tree_index_of_first_child + 9 - 1);
    this->textlabel_11.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 5 - 1, tree_index_of_first_child + 11 - 1);
    this->inputtext_12.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 6 - 1, tree_index_of_first_child + 11 - 1);
    this->textlabel_13.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 7 - 1, tree_index_of_first_child + 13 - 1);
    this->inputtext_14.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 8 - 1, tree_index_of_first_child + 13 - 1);
    self->root_5.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_16->background.get();
                        });
    self->root_5_empty_8_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 6>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_9.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_9.self_weak.lock()->into_dyn(), self->textlabel_9.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_10.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_10.self_weak.lock()->into_dyn(), self->inputtext_10.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_11.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_11.self_weak.lock()->into_dyn(), self->textlabel_11.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_12.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_12.self_weak.lock()->into_dyn(), self->inputtext_12.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_13.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_13.self_weak.lock()->into_dyn(), self->textlabel_13.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_14.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_14.self_weak.lock()->into_dyn(), self->inputtext_14.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 6), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20), 300, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_5_empty_8_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 6>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_9.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_9.self_weak.lock()->into_dyn(), self->textlabel_9.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_10.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_10.self_weak.lock()->into_dyn(), self->inputtext_10.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_11.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_11.self_weak.lock()->into_dyn(), self->textlabel_11.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_12.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_12.self_weak.lock()->into_dyn(), self->inputtext_12.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_13.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_13.self_weak.lock()->into_dyn(), self->textlabel_13.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_14.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_14.self_weak.lock()->into_dyn(), self->inputtext_14.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 6),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20));
                        });
    self->root_5_empty_8_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 6>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_9.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_9.self_weak.lock()->into_dyn(), self->textlabel_9.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_10.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_10.self_weak.lock()->into_dyn(), self->inputtext_10.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_11.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_11.self_weak.lock()->into_dyn(), self->textlabel_11.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_12.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_12.self_weak.lock()->into_dyn(), self->inputtext_12.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_13.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_13.self_weak.lock()->into_dyn(), self->textlabel_13.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_14.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_14.self_weak.lock()->into_dyn(), self->inputtext_14.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 6),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_5.height.set(600);
    self->root_5_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_5), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
                        });
    self->root_5_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_5), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
                        });
    self->root_5.title.set(slint::SharedString(u8"Slint Window"));
    self->root_5.width.set(960);
    self->rectangle_6.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)));
    self->rectangle_7.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->rectangle_7.border_radius.set(8);
    self->textlabel_9.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[1];
                        });
    self->textlabel_9.root_1.text.set(slint::SharedString(u8"Username"));
    self->textlabel_9.root_1.width.set(410);
    self->textlabel_9.root_1_x.set(20);
    self->textlabel_9.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[0];
                        });
    self->inputtext_10.root_2_x.set(20);
    self->inputtext_10.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[2];
                        });
    self->textlabel_11.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[5];
                        });
    self->textlabel_11.root_1.text.set(slint::SharedString(u8"E-mail"));
    self->textlabel_11.root_1.width.set(410);
    self->textlabel_11.root_1_x.set(20);
    self->textlabel_11.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[4];
                        });
    self->inputtext_12.root_2_x.set(20);
    self->inputtext_12.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[6];
                        });
    self->textlabel_13.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[9];
                        });
    self->textlabel_13.root_1.text.set(slint::SharedString(u8"Password"));
    self->textlabel_13.root_1.width.set(410);
    self->textlabel_13.root_1_x.set(20);
    self->textlabel_13.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[8];
                        });
    self->inputtext_14.root_2_x.set(20);
    self->inputtext_14.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_5_empty_8_layout_cache.get()[10];
                        });
    self->root_5.always_on_top.set_constant();
    self->root_5.default_font_family.set_constant();
    self->root_5.default_font_size.set_constant();
    self->root_5.default_font_weight.set_constant();
    self->root_5.icon.set_constant();
    self->root_5.no_frame.set_constant();
    self->root_5.resize_border_width.set_constant();
    self->root_5.title.set_constant();
    self->rectangle_6.background.set_constant();
    self->rectangle_7.background.set_constant();
    self->rectangle_7.border_color.set_constant();
    self->rectangle_7.border_radius.set_constant();
    self->rectangle_7.border_width.set_constant();
    self->textlabel_9.root_1.color.set_constant();
    self->textlabel_9.root_1.font_size.set_constant();
    self->textlabel_9.root_1.font_weight.set_constant();
    self->textlabel_9.root_1.horizontal_alignment.set_constant();
    self->textlabel_9.root_1.text.set_constant();
    self->textlabel_9.root_1.vertical_alignment.set_constant();
    self->textlabel_9.root_1.width.set_constant();
    self->textlabel_9.root_1_x.set_constant();
    self->inputtext_10.root_2.background.set_constant();
    self->inputtext_10.root_2_x.set_constant();
    self->textlabel_11.root_1.color.set_constant();
    self->textlabel_11.root_1.font_size.set_constant();
    self->textlabel_11.root_1.font_weight.set_constant();
    self->textlabel_11.root_1.horizontal_alignment.set_constant();
    self->textlabel_11.root_1.text.set_constant();
    self->textlabel_11.root_1.vertical_alignment.set_constant();
    self->textlabel_11.root_1.width.set_constant();
    self->textlabel_11.root_1_x.set_constant();
    self->inputtext_12.root_2.background.set_constant();
    self->inputtext_12.root_2_x.set_constant();
    self->textlabel_13.root_1.color.set_constant();
    self->textlabel_13.root_1.font_size.set_constant();
    self->textlabel_13.root_1.font_weight.set_constant();
    self->textlabel_13.root_1.horizontal_alignment.set_constant();
    self->textlabel_13.root_1.text.set_constant();
    self->textlabel_13.root_1.vertical_alignment.set_constant();
    self->textlabel_13.root_1.width.set_constant();
    self->textlabel_13.root_1_x.set_constant();
    self->inputtext_14.root_2.background.set_constant();
    self->inputtext_14.root_2_x.set_constant();
}

inline auto Signup::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->textlabel_9.user_init();
    this->inputtext_10.user_init();
    this->textlabel_11.user_init();
    this->inputtext_12.user_init();
    this->textlabel_13.user_init();
    this->inputtext_14.user_init();
}

inline auto Signup::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_5_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(960, layout_info.max_percent, 960, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_5_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(600, layout_info.max_percent, 600, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Signup::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(960), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(960), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(300), float(450), float(255), float(150)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_5_empty_8_layout_cache.get()[1]), float(410), float(20), float(self->root_5_empty_8_layout_cache.get()[0])));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(20), float(self->root_5_empty_8_layout_cache.get()[2])));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_5_empty_8_layout_cache.get()[5]), float(410), float(20), float(self->root_5_empty_8_layout_cache.get()[4])));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(20), float(self->root_5_empty_8_layout_cache.get()[6])));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_5_empty_8_layout_cache.get()[9]), float(410), float(20), float(self->root_5_empty_8_layout_cache.get()[8])));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(20), float(self->root_5_empty_8_layout_cache.get()[10])));
    }
    if (index == 3) {
        return self->textlabel_9.item_geometry(0);
    } else if (index == 4) {
        return self->inputtext_10.item_geometry(0);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.item_geometry(index - 8);
    } else if (index == 5) {
        return self->textlabel_11.item_geometry(0);
    } else if (index == 6) {
        return self->inputtext_12.item_geometry(0);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.item_geometry(index - 10);
    } else if (index == 7) {
        return self->textlabel_13.item_geometry(0);
    } else if (index == 8) {
        return self->inputtext_14.item_geometry(0);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.item_geometry(index - 12);
    } else return {};
}

inline auto Signup::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 3: return slint::cbindgen_private::AccessibleRole::Text;
        case 5: return slint::cbindgen_private::AccessibleRole::Text;
        case 7: return slint::cbindgen_private::AccessibleRole::Text;
    }
    if (index == 3) {
        return self->textlabel_9.accessible_role(0);
    } else if (index == 4) {
        return self->inputtext_10.accessible_role(0);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.accessible_role(index - 8);
    } else if (index == 5) {
        return self->textlabel_11.accessible_role(0);
    } else if (index == 6) {
        return self->inputtext_12.accessible_role(0);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.accessible_role(index - 10);
    } else if (index == 7) {
        return self->textlabel_13.accessible_role(0);
    } else if (index == 8) {
        return self->inputtext_14.accessible_role(0);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.accessible_role(index - 12);
    } else return {};
}

inline auto Signup::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_9.root_1.text.get();
        case (5 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_11.root_1.text.get();
        case (7 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_13.root_1.text.get();
    }
    if (index == 3) {
        return self->textlabel_9.accessible_string_property(0, what);
    } else if (index == 4) {
        return self->inputtext_10.accessible_string_property(0, what);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.accessible_string_property(index - 8, what);
    } else if (index == 5) {
        return self->textlabel_11.accessible_string_property(0, what);
    } else if (index == 6) {
        return self->inputtext_12.accessible_string_property(0, what);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.accessible_string_property(index - 10, what);
    } else if (index == 7) {
        return self->textlabel_13.accessible_string_property(0, what);
    } else if (index == 8) {
        return self->inputtext_14.accessible_string_property(0, what);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.accessible_string_property(index - 12, what);
    } else return {};
}

inline auto Signup::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 3) {
        return self->textlabel_9.accessibility_action(0, action);
    } else if (index == 4) {
        return self->inputtext_10.accessibility_action(0, action);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.accessibility_action(index - 8, action);
    } else if (index == 5) {
        return self->textlabel_11.accessibility_action(0, action);
    } else if (index == 6) {
        return self->inputtext_12.accessibility_action(0, action);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.accessibility_action(index - 10, action);
    } else if (index == 7) {
        return self->textlabel_13.accessibility_action(0, action);
    } else if (index == 8) {
        return self->inputtext_14.accessibility_action(0, action);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.accessibility_action(index - 12, action);
    } else return ;
}

inline auto Signup::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 3) {
        return self->textlabel_9.supported_accessibility_actions(0);
    } else if (index == 4) {
        return self->inputtext_10.supported_accessibility_actions(0);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.supported_accessibility_actions(index - 8);
    } else if (index == 5) {
        return self->textlabel_11.supported_accessibility_actions(0);
    } else if (index == 6) {
        return self->inputtext_12.supported_accessibility_actions(0);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.supported_accessibility_actions(index - 10);
    } else if (index == 7) {
        return self->textlabel_13.supported_accessibility_actions(0);
    } else if (index == 8) {
        return self->inputtext_14.supported_accessibility_actions(0);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.supported_accessibility_actions(index - 12);
    } else return {};
}

inline auto Signup::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 3) {
        return self->textlabel_9.element_infos(0);
    } else if (index == 4) {
        return self->inputtext_10.element_infos(0);
    } else if (index >= 9 && index < 11) {
        return self->inputtext_10.element_infos(index - 8);
    } else if (index == 5) {
        return self->textlabel_11.element_infos(0);
    } else if (index == 6) {
        return self->inputtext_12.element_infos(0);
    } else if (index >= 11 && index < 13) {
        return self->inputtext_12.element_infos(index - 10);
    } else if (index == 7) {
        return self->textlabel_13.element_infos(0);
    } else if (index == 8) {
        return self->inputtext_14.element_infos(0);
    } else if (index >= 13 && index < 15) {
        return self->inputtext_14.element_infos(index - 12);
    } else return {};
}

inline auto Signup::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Signup*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Signup*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Signup::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Signup::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Signup::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Signup::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Signup::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto Signup::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Signup::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Signup::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 3, 0, 1, false), 
slint::private_api::make_item_node(6, 3, 0, 2, false), 
slint::private_api::make_item_node(0, 9, 2, 3, true), 
slint::private_api::make_item_node(2, 9, 2, 4, false), 
slint::private_api::make_item_node(0, 11, 2, 5, true), 
slint::private_api::make_item_node(2, 11, 2, 6, false), 
slint::private_api::make_item_node(0, 13, 2, 7, true), 
slint::private_api::make_item_node(2, 13, 2, 8, false), 
slint::private_api::make_item_node(0, 11, 4, 9, false), 
slint::private_api::make_item_node(0, 11, 4, 10, true), 
slint::private_api::make_item_node(0, 13, 6, 11, false), 
slint::private_api::make_item_node(0, 13, 6, 12, true), 
slint::private_api::make_item_node(0, 15, 8, 13, false), 
slint::private_api::make_item_node(0, 15, 8, 14, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Signup::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(Signup, root_5) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Signup, rectangle_6) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Signup, rectangle_7) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_9) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_10) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_11) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_12) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_13) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_14) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_10) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_10) +  offsetof(InputText_root_2, textinput_4) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_12) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_12) +  offsetof(InputText_root_2, textinput_4) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_14) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_14) +  offsetof(InputText_root_2, textinput_4) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Signup::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Signup*>(component.instance)->layout_info(o);
}

inline auto Signup::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Signup*>(component.instance)->item_geometry(index);
}

inline auto Signup::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Signup*>(component.instance)->accessible_role(index);
}

inline auto Signup::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Signup*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Signup::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Signup*>(component.instance)->accessibility_action(index, *action);
}

inline auto Signup::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Signup*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Signup::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Signup::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Signup*>(component.instance)->globals->window().window_handle();
}

inline auto Signup::create () -> slint::ComponentHandle<Signup>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Signup>::make();
    auto self = const_cast<Signup *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    self->user_init();
    self->window();
    return slint::ComponentHandle<Signup>{ self_rc };
}

inline Signup::~Signup (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Signup::show () -> void{
    window().show();
}

inline auto Signup::hide () -> void{
    window().hide();
}

inline auto Signup::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto Signup::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
