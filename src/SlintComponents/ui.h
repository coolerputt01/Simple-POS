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

class FocusBorder_root_5;

class Button_root_7;

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

class FocusBorder_root_5 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_5_height;
    slint::private_api::Property<float> root_5_width;
    slint::cbindgen_private::BasicBorderRectangle root_5 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_6 = {};
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

class Component_image_11 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_7 const> parent;
    slint::cbindgen_private::ImageItem image_11 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
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
    static auto create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_image_11>;
    ~Component_image_11 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_11>;
};

class Component_text_13 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_7 const> parent;
    slint::cbindgen_private::SimpleText text_13 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
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
    static auto create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_text_13>;
    ~Component_text_13 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_13>;
};

class Component_focusborder_17 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_7 const> parent;
    FocusBorder_root_5 focusborder_17;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
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
    static auto create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_focusborder_17>;
    ~Component_focusborder_17 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_17>;
};

class Button_root_7 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::cbindgen_private::AccessibleRole> root_7_accessible_role;
    slint::private_api::Property<bool> root_7_checked;
    slint::private_api::Property<bool> root_7_has_focus;
    slint::private_api::Property<float> root_7_height;
    slint::private_api::Property<float> root_7_i_background_8_width;
    slint::private_api::Property<slint::SharedVector<float>> root_7_i_layout_10_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_7_i_layout_10_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_7_i_layout_10_layoutinfo_v;
    slint::private_api::Property<slint::Image> root_7_icon;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_7_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_7_layoutinfo_v;
    slint::private_api::Property<bool> root_7_pressed;
    slint::private_api::Property<bool> root_7_primary;
    slint::private_api::Property<int> root_7_state;
    slint::private_api::Property<slint::SharedString> root_7_text;
    slint::private_api::Property<slint::Brush> root_7_text_color;
    slint::private_api::Property<float> root_7_width;
    slint::private_api::Property<float> root_7_x;
    slint::private_api::Property<float> root_7_y;
    slint::private_api::Callback<void()> root_7_accessible_action_default;
    slint::private_api::Callback<void()> root_7_clicked;
    slint::cbindgen_private::Empty root_7 = {};
    slint::cbindgen_private::BasicBorderRectangle i_background_8 = {};
    slint::cbindgen_private::BasicBorderRectangle i_border_9 = {};
    slint::cbindgen_private::TouchArea i_touch_area_15 = {};
    slint::cbindgen_private::FocusScope i_focus_scope_16 = {};
    slint::private_api::Conditional<class Component_image_11> repeater_0;
    slint::private_api::Conditional<class Component_text_13> repeater_1;
    slint::private_api::Conditional<class Component_focusborder_17> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class FluentPalette_37 {
    public:
    slint::private_api::Property<slint::Brush> accent_control_border;
    slint::private_api::Property<slint::Brush> background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<bool> dark_color_scheme;
    slint::private_api::Property<slint::Brush> foreground;
    slint::private_api::Property<slint::Brush> selection_foreground;
    FluentPalette_37 (const class SharedGlobals *globals);
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
    std::shared_ptr<FluentPalette_37> global_FluentPalette_37 = std::make_shared<FluentPalette_37>(this);
    SharedGlobals (){
        global_FluentPalette_37->init();
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
    slint::private_api::Property<slint::SharedVector<float>> root_19_empty_27_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_19_empty_27_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_19_empty_27_layoutinfo_v;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_19_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> root_19_layoutinfo_v;
    slint::private_api::Property<bool> root_19_rectangle_22_show;
    slint::private_api::Property<slint::SharedString> root_19_rectangle_22_type;
    slint::private_api::Property<float> root_19_text_23_min_height;
    slint::private_api::Property<float> root_19_text_23_min_width;
    slint::private_api::Property<float> root_19_text_23_preferred_height;
    slint::private_api::Property<float> root_19_text_23_preferred_width;
    slint::private_api::Callback<void(slint::SharedString, slint::SharedString, slint::SharedString)> root_19_signup;
    TextLabel_root_1 textlabel_29;
    InputText_root_2 inputtext_30;
    TextLabel_root_1 textlabel_31;
    InputText_root_2 inputtext_32;
    TextLabel_root_1 textlabel_33;
    InputText_root_2 inputtext_34;
    Button_root_7 button_35;
    slint::cbindgen_private::WindowItem root_19 = {};
    slint::cbindgen_private::Rectangle rectangle_20 = {};
    slint::cbindgen_private::Clip _visibility_21 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_22 = {};
    slint::cbindgen_private::SimpleText text_23 = {};
    slint::cbindgen_private::ImageItem image_24 = {};
    slint::cbindgen_private::Rectangle rectangle_25 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_26 = {};
    slint::cbindgen_private::SimpleText text_28 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
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
    auto get_email () const -> slint::SharedString;
    auto set_email (const slint::SharedString &value) const -> void;
    auto get_password () const -> slint::SharedString;
    auto set_password (const slint::SharedString &value) const -> void;
    auto get_showToast () const -> bool;
    auto set_showToast (const bool &value) const -> void;
    auto invoke_signup (slint::SharedString arg_0, slint::SharedString arg_1, slint::SharedString arg_2) const -> void;
    template<std::invocable<slint::SharedString, slint::SharedString, slint::SharedString> Functor> auto on_signup (Functor && callback_handler) const;
    auto get_toastContent () const -> slint::SharedString;
    auto set_toastContent (const slint::SharedString &value) const -> void;
    auto get_typeDecl () const -> slint::SharedString;
    auto set_typeDecl (const slint::SharedString &value) const -> void;
    auto get_username () const -> slint::SharedString;
    auto set_username (const slint::SharedString &value) const -> void;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_37;
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
    self->root_1.font_weight.set(static_cast<int>(500));
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
                            return self->globals->global_FluentPalette_37->selection_foreground.get().color();
                        });
    self->textinput_4.single_line.set(true);
    self->textinput_4.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
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
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(390), float(5), float(-14)));
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

inline auto FocusBorder_root_5::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_5.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9)));
                        });
    self->root_5.border_width.set(2);
    self->rectangle_6.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.003121664e9) : slint::Color::from_argb_encoded(+4.294967295e9)));
                        });
    self->rectangle_6.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_5.border_radius.get() -(float) 2);
                        });
    self->rectangle_6.border_width.set(1);
    self->root_5.background.set_constant();
    self->root_5.border_width.set_constant();
    self->rectangle_6.background.set_constant();
    self->rectangle_6.border_width.set_constant();
}

inline auto FocusBorder_root_5::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto FocusBorder_root_5::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_5), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_5), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto FocusBorder_root_5::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_5_height.get()), float(self->root_5_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->root_5_height.get() -(float) 4)), float((self->root_5_width.get() -(float) 4)), float(2), float(2)));
    }
    return {};
}

inline auto FocusBorder_root_5::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_5::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto FocusBorder_root_5::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto FocusBorder_root_5::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_5::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline const slint::private_api::ItemTreeVTable Component_image_11::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_11>, slint::private_api::dealloc };

inline auto Component_image_11::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_7>(parent->self_weak.lock().value(), parent);
    slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { slint::private_api::Property<slint::Image>::link_two_way(&self->image_11.source, &x->root_7_icon); });
    self->image_11.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(0));
                        });
    self->image_11.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); })) -(float) 5) -(float) 5);
                        });
    self->image_11.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->image_11.width.set(20);
    self->image_11.image_fit.set_constant();
    self->image_11.image_rendering.set_constant();
    self->image_11.source.set_constant();
    self->image_11.width.set_constant();
}

inline auto Component_image_11::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_image_11::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_11), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_11), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Component_image_11::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); })) -(float) 5) -(float) 5)), float(20), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->root_7_i_layout_10_layout_cache.get(), 0, 0, 2); }))), float(5)));
    }
    return {};
}

inline auto Component_image_11::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto Component_image_11::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_image_11::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_image_11::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_11::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_11::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_11*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_image_11*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_image_11::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_image_11::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_image_11::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_image_11::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_image_11::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_11*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_image_11::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_image_11::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_image_11::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_image_11::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_11, image_11) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_image_11::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_11*>(component.instance)->layout_info(o);
}

inline auto Component_image_11::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_11*>(component.instance)->item_geometry(index);
}

inline auto Component_image_11::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_11*>(component.instance)->accessible_role(index);
}

inline auto Component_image_11::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_11*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_image_11::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_11*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_image_11::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_11*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_image_11::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_image_11::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_11*>(component.instance)->globals->window().window_handle();
}

inline auto Component_image_11::create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_image_11>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_11>::make();
    auto self = const_cast<Component_image_11 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_11>{ self_rc };
}

inline Component_image_11::~Component_image_11 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_image_11::init () -> void{
    user_init();
}

inline auto Component_image_11::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_text_13::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_13>, slint::private_api::dealloc };

inline auto Component_text_13::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_7>(parent->self_weak.lock().value(), parent);
    self->text_13.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_text_color.get(); }));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->text_13.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->text_13.font_weight.set(static_cast<int>(400));
    self->text_13.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); })) -(float) 5) -(float) 5);
                        });
    self->text_13.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->text_13.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_text.get(); }));
                        });
    self->text_13.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->text_13.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->root_7_i_layout_10_layout_cache.get(), 3, 0, 2); }));
                        });
    self->text_13.font_weight.set_constant();
    self->text_13.horizontal_alignment.set_constant();
    self->text_13.vertical_alignment.set_constant();
}

inline auto Component_text_13::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_text_13::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_13), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_13), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_text_13::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); })) -(float) 5) -(float) 5)), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->root_7_i_layout_10_layout_cache.get(), 3, 0, 2); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->root_7_i_layout_10_layout_cache.get(), 2, 0, 2); }))), float(5)));
    }
    return {};
}

inline auto Component_text_13::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_13::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_text_13::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_text_13::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_13::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_13::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_13*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_text_13*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_text_13::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_text_13::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_text_13::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_text_13::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_text_13::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_13*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 6 };
}

inline auto Component_text_13::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_text_13::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_text_13::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_text_13::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_13, text_13) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_text_13::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_13*>(component.instance)->layout_info(o);
}

inline auto Component_text_13::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_13*>(component.instance)->item_geometry(index);
}

inline auto Component_text_13::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_13*>(component.instance)->accessible_role(index);
}

inline auto Component_text_13::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_13*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_text_13::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_13*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_text_13::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_13*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_text_13::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_text_13::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_13*>(component.instance)->globals->window().window_handle();
}

inline auto Component_text_13::create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_text_13>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_13>::make();
    auto self = const_cast<Component_text_13 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_13>{ self_rc };
}

inline Component_text_13::~Component_text_13 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_text_13::init () -> void{
    user_init();
}

inline auto Component_text_13::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_17::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_17>, slint::private_api::dealloc };

inline auto Component_focusborder_17::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_7 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_7>(parent->self_weak.lock().value(), parent);
    this->focusborder_17.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->focusborder_17.root_5.border_radius.set(4);
    self->focusborder_17.root_5_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); }));
                        });
    self->focusborder_17.root_5_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_width.get(); }));
                        });
    self->focusborder_17.root_5.background.set_constant();
    self->focusborder_17.root_5.border_radius.set_constant();
    self->focusborder_17.root_5.border_width.set_constant();
}

inline auto Component_focusborder_17::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->focusborder_17.user_init();
}

inline auto Component_focusborder_17::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_17.root_5), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->focusborder_17.self_weak.lock()->into_dyn(), self->focusborder_17.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_17.root_5), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->focusborder_17.self_weak.lock()->into_dyn(), self->focusborder_17.tree_index);
}

inline auto Component_focusborder_17::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_height.get(); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->root_7_width.get(); }))), float(0), float(0)));
    }
    if (index == 0) {
        return self->focusborder_17.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_17::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_17.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_17::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->focusborder_17.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_17::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->focusborder_17.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_17::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_17.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_17::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_17.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_17.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_17::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_17*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_17*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_17::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_17::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_17::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_17::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_17::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_17*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_focusborder_17::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_17::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_17::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_17::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_17, focusborder_17) +  offsetof(FocusBorder_root_5, root_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_17, focusborder_17) +  offsetof(FocusBorder_root_5, rectangle_6) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_17::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_17*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_17::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_17*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_17::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_17*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_17::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_17*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_17::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_17*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_17::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_17*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_17::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_17::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_17*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_17::create (class Button_root_7 const * parent) -> slint::ComponentHandle<Component_focusborder_17>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_17>::make();
    auto self = const_cast<Component_focusborder_17 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_17>{ self_rc };
}

inline Component_focusborder_17::~Component_focusborder_17 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_17::init () -> void{
    user_init();
}

inline auto Component_focusborder_17::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Button_root_7::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    slint::private_api::Property<bool>::link_two_way(&self->i_touch_area_15.enabled, &self->i_focus_scope_16.enabled);
    self->root_7_accessible_action_default.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->i_touch_area_15.clicked.call();
                });
    self->root_7_accessible_role.set(slint::cbindgen_private::AccessibleRole::Button);
    self->root_7_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->i_focus_scope_16.has_focus.get();
                        });
    self->root_7_i_background_8_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_7_width.get();
                        });
    self->root_7_i_layout_10_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });self->repeater_1.ensure_updated(self);repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->root_7_i_background_8_width.get(), 4),repeated_indices); }();
                        });
    self->root_7_i_layout_10_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,4,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Center); }();
                        });
    self->root_7_i_layout_10_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5)); }();
                        });
    self->root_7_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_0 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_0.max, layout_info_0.max_percent, std::max<float>(32, self->root_7_i_layout_10_layoutinfo_h.get().min), layout_info_0.min_percent, layout_info_0.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_7_i_layout_10_layoutinfo_h.get()));
                        });
    self->root_7_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, std::max<float>(32, self->root_7_i_layout_10_layoutinfo_v.get().min), layout_info_1.min_percent, layout_info_1.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_7_i_layout_10_layoutinfo_v.get()));
                        });
    self->root_7_pressed.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->i_focus_scope_16.enabled.get() && self->i_touch_area_15.pressed.get());
                        });
    self->root_7_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->i_focus_scope_16.enabled.get() ? 1 : (self->root_7_pressed.get() ? 2 : (self->i_touch_area_15.has_hover.get() ? 3 : (self->root_7_checked.get() ? 4 : 0))));
                        });
    self->root_7_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_7_state = self->root_7_state.get();;return (std::abs(float(tmp_root_7_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.281701375e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+1.593835519e9) : slint::Color::from_argb_encoded(+1.577058304e9)))) : (std::abs(float(tmp_root_7_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.147483648e9) : slint::Color::from_argb_encoded(+3.019898879e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9)))) : (std::abs(float(tmp_root_7_state - 4)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9))))))); }();
                        });
    self->i_background_8.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_7_state = self->root_7_state.get();;return (std::abs(float(tmp_root_7_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_7_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.428896255e9) : slint::Color::from_argb_encoded(+3.422576568e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(150994943) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_7_state - 3)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.865103871e9) : slint::Color::from_argb_encoded(+3.858784184e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+2.163866105e9)))) : (std::abs(float(tmp_root_7_state - 4)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.284534271e9) : slint::Color::from_argb_encoded(+4.278214584e9))) : (self->root_7_primary.get() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.284534271e9) : slint::Color::from_argb_encoded(+4.278214584e9))) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(+3.019898879e9)))))))); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->i_background_8.border_radius.set(4);
    self->i_border_9.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_7_state = self->root_7_state.get();;return (std::abs(float(tmp_root_7_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->root_7_primary.get() || self->root_7_checked.get() ? slint::Brush(slint::Color::from_argb_encoded(0)) : slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)))) : (std::abs(float(tmp_root_7_state - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_37->dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))) : (std::abs(float(tmp_root_7_state - 4)) < std::numeric_limits<float>::epsilon() ? self->globals->global_FluentPalette_37->accent_control_border.get() : (self->root_7_primary.get() ? self->globals->global_FluentPalette_37->accent_control_border.get() : (self->globals->global_FluentPalette_37->dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(301989888), float(0.0833), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9058), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }()))))); }();
                        });
    self->i_border_9.border_radius.set(4);
    self->i_border_9.border_width.set(1);
    self->i_touch_area_15.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ if (false) { self->root_7_checked.set((! self->root_7_checked.get())); } else { ; };self->root_7_clicked.call(); }();
                });
    self->i_focus_scope_16.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->i_focus_scope_16.focus_on_click.set(true);
    self->i_focus_scope_16.focus_on_tab_navigation.set(true);
    self->i_focus_scope_16.key_pressed.set_handler(
                [this]([[maybe_unused]] slint::cbindgen_private::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return (! ((arg_0.text == slint::SharedString(u8" ")) || (arg_0.text == slint::SharedString(u8"\n"))) ? slint::cbindgen_private::EventResult::Reject : [&]{ self->i_touch_area_15.clicked.call();return slint::cbindgen_private::EventResult::Accept; }());
                });
    self->root_7_icon.set_constant();
    self->i_background_8.border_color.set_constant();
    self->i_background_8.border_radius.set_constant();
    self->i_background_8.border_width.set_constant();
    self->i_border_9.background.set_constant();
    self->i_border_9.border_radius.set_constant();
    self->i_border_9.border_width.set_constant();
    self->i_touch_area_15.mouse_cursor.set_constant();
    self->i_focus_scope_16.focus_on_click.set_constant();
    self->i_focus_scope_16.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((slint::Image().size().width > 0) && (slint::Image().size().height > 0)); });
    self->repeater_1.set_model_binding([self] { (void)self; return (self->root_7_text.get() != slint::SharedString(u8"")); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->root_7_has_focus.get() && self->i_focus_scope_16.enabled.get()); });
}

inline auto Button_root_7::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Button_root_7::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_7_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_7_i_layout_10_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_7_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_7_i_layout_10_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto Button_root_7::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_7_height.get()), float(self->root_7_width.get()), float(self->root_7_x.get()), float(self->root_7_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_7_height.get()), float(self->root_7_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_7_height.get()), float(self->root_7_width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_7_height.get()), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_7_height.get()), float(self->root_7_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Button_root_7::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return self->root_7_accessible_role.get();
    }
    return {};
}

inline auto Button_root_7::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->root_7_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->i_focus_scope_16.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->root_7_text.get();
    }
    return {};
}

inline auto Button_root_7::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->root_7_accessible_action_default.call();
    }
    return ;
}

inline auto Button_root_7::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    return {};
}

inline auto Button_root_7::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Button_root_7::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto Button_root_7::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto Button_root_7::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline FluentPalette_37::FluentPalette_37 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_37::init () -> void{
    (void)this->globals;
    this->accent_control_border.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (this->dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(603979776), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.711276032e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }());
                        });
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
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_37_color_scheme = this->color_scheme.get();;return (! (tmp_FluentPalette_37_color_scheme == slint::cbindgen_private::ColorScheme::Unknown) ? (tmp_FluentPalette_37_color_scheme == slint::cbindgen_private::ColorScheme::Dark) : (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark)); }();
                        });
    this->foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9)));
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
    this->textlabel_29.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 9 - 1, tree_index_of_first_child + 16 - 1);
    this->inputtext_30.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 10 - 1, tree_index_of_first_child + 16 - 1);
    this->textlabel_31.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 11 - 1, tree_index_of_first_child + 18 - 1);
    this->inputtext_32.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 12 - 1, tree_index_of_first_child + 18 - 1);
    this->textlabel_33.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 13 - 1, tree_index_of_first_child + 20 - 1);
    this->inputtext_34.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 14 - 1, tree_index_of_first_child + 20 - 1);
    this->button_35.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 15 - 1, tree_index_of_first_child + 22 - 1);
    self->root_19.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_37->background.get();
                        });
    self->root_19.default_font_family.set(slint::SharedString(u8"Urbanist"));
    self->root_19_empty_27_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_28), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 8 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_29.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_29.self_weak.lock()->into_dyn(), self->textlabel_29.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_30.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_30.self_weak.lock()->into_dyn(), self->inputtext_30.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_31.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_31.self_weak.lock()->into_dyn(), self->textlabel_31.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_32.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_32.self_weak.lock()->into_dyn(), self->inputtext_32.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_33.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_33.self_weak.lock()->into_dyn(), self->textlabel_33.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_34.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_34.self_weak.lock()->into_dyn(), self->inputtext_34.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_35.root_7_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_35.root_7_i_layout_10_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 8), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(23, 23), 400, 12),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_19_empty_27_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_28), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 8 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_29.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_29.self_weak.lock()->into_dyn(), self->textlabel_29.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_30.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_30.self_weak.lock()->into_dyn(), self->inputtext_30.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_31.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_31.self_weak.lock()->into_dyn(), self->textlabel_31.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_32.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_32.self_weak.lock()->into_dyn(), self->inputtext_32.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_33.root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->textlabel_33.self_weak.lock()->into_dyn(), self->textlabel_33.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_34.root_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->inputtext_34.self_weak.lock()->into_dyn(), self->inputtext_34.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(400, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_35.root_7_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_35.root_7_i_layout_10_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 8),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(23, 23));
                        });
    self->root_19_empty_27_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_28), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 8 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_29.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_29.self_weak.lock()->into_dyn(), self->textlabel_29.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_30.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_30.self_weak.lock()->into_dyn(), self->inputtext_30.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_31.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_31.self_weak.lock()->into_dyn(), self->textlabel_31.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_32.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_32.self_weak.lock()->into_dyn(), self->inputtext_32.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->textlabel_33.root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->textlabel_33.self_weak.lock()->into_dyn(), self->textlabel_33.tree_index)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->inputtext_34.root_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->inputtext_34.self_weak.lock()->into_dyn(), self->inputtext_34.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_35.root_7_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_35.root_7_i_layout_10_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 8),12,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(23, 23),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_19.height.set(600);
    self->root_19_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_19), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
                        });
    self->root_19_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_19), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
                        });
    self->root_19_rectangle_22_show.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return false;
                        });
    self->root_19_rectangle_22_type.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
    self->root_19_text_23_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_23), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).min;
                        });
    self->root_19_text_23_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_23), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).min;
                        });
    self->root_19_text_23_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_23), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).preferred;
                        });
    self->root_19_text_23_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_23), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).preferred;
                        });
    self->root_19.title.set(slint::SharedString(u8"Slint Window"));
    self->root_19.width.set(960);
    self->rectangle_20.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.27819008e9)));
    self->_visibility_21.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->root_19_rectangle_22_show.get());
                        });
    self->rectangle_22.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_19_rectangle_22_type = self->root_19_rectangle_22_type.get();;return (tmp_root_19_rectangle_22_type == slint::SharedString(u8"success") ? slint::Brush(slint::Color::from_argb_encoded(+4.281236786e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"error") ? slint::Brush(slint::Color::from_argb_encoded(+4.292030255e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"warning") ? slint::Brush(slint::Color::from_argb_encoded(+4.294278144e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"info") ? slint::Brush(slint::Color::from_argb_encoded(+4.279858898e9)) : slint::Brush(slint::Color::from_argb_encoded(+4.279390464e9)))))); }();
                        });
    self->rectangle_22.border_radius.set(2);
    self->text_23.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->text_23.font_size.set(18);
    self->text_23.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->root_19_text_23_preferred_height.get(), self->root_19_text_23_min_height.get());
                        });
    self->text_23.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
    self->text_23.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->root_19_text_23_preferred_width.get(), self->root_19_text_23_min_width.get());
                        });
    self->image_24.height.set(16);
    self->image_24.source.set(slint::Image::load_from_path(slint::SharedString(u8"C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\icons\\cancel.svg")));
    self->image_24.width.set(16);
    self->rectangle_25.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_19_rectangle_22_type = self->root_19_rectangle_22_type.get();;return (tmp_root_19_rectangle_22_type == slint::SharedString(u8"success") ? slint::Brush(slint::Color::from_argb_encoded(+4.283215696e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"error") ? slint::Brush(slint::Color::from_argb_encoded(+4.29419807e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"warning") ? slint::Brush(slint::Color::from_argb_encoded(+4.294940672e9)) : (tmp_root_19_rectangle_22_type == slint::SharedString(u8"info") ? slint::Brush(slint::Color::from_argb_encoded(+4.280391411e9)) : slint::Brush(slint::Color::from_argb_encoded(0)))))); }();
                        });
    self->rectangle_26.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->rectangle_26.border_radius.set(0);
    self->text_28.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_37->foreground.get();
                        });
    self->text_28.font_size.set(24);
    self->text_28.font_weight.set(static_cast<int>(720));
    self->text_28.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[1];
                        });
    self->text_28.text.set(slint::SharedString(u8"Sign-Up"));
    self->text_28.width.set(404);
    self->textlabel_29.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[3];
                        });
    self->textlabel_29.root_1.text.set(slint::SharedString(u8"Username"));
    self->textlabel_29.root_1.width.set(404);
    self->textlabel_29.root_1_x.set(23);
    self->textlabel_29.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[2];
                        });
    self->inputtext_30.textinput_4.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
    self->inputtext_30.root_2_x.set(23);
    self->inputtext_30.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[4];
                        });
    self->textlabel_31.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[7];
                        });
    self->textlabel_31.root_1.text.set(slint::SharedString(u8"E-mail"));
    self->textlabel_31.root_1.width.set(404);
    self->textlabel_31.root_1_x.set(23);
    self->textlabel_31.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[6];
                        });
    self->inputtext_32.textinput_4.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
    self->inputtext_32.root_2_x.set(23);
    self->inputtext_32.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[8];
                        });
    self->textlabel_33.root_1.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[11];
                        });
    self->textlabel_33.root_1.text.set(slint::SharedString(u8"Password"));
    self->textlabel_33.root_1.width.set(404);
    self->textlabel_33.root_1_x.set(23);
    self->textlabel_33.root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[10];
                        });
    self->inputtext_34.textinput_4.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString(u8"");
                        });
    self->inputtext_34.root_2_x.set(23);
    self->inputtext_34.root_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[12];
                        });
    self->button_35.root_7_accessible_role.set(slint::cbindgen_private::AccessibleRole::None);
    self->button_35.root_7_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->root_19_signup.call(self->inputtext_30.textinput_4.text.get(),self->inputtext_32.textinput_4.text.get(),self->inputtext_34.textinput_4.text.get());
                });
    self->button_35.root_7_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[15];
                        });
    self->button_35.root_7_primary.set(true);
    self->button_35.root_7_text.set(slint::SharedString(u8"Signup"));
    self->button_35.root_7_width.set(404);
    self->button_35.root_7_x.set(23);
    self->button_35.root_7_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_19_empty_27_layout_cache.get()[14];
                        });
    self->root_19.always_on_top.set_constant();
    self->root_19.default_font_family.set_constant();
    self->root_19.default_font_size.set_constant();
    self->root_19.default_font_weight.set_constant();
    self->root_19.icon.set_constant();
    self->root_19.no_frame.set_constant();
    self->root_19.resize_border_width.set_constant();
    self->root_19.title.set_constant();
    self->rectangle_20.background.set_constant();
    self->_visibility_21.border_bottom_left_radius.set_constant();
    self->_visibility_21.border_bottom_right_radius.set_constant();
    self->_visibility_21.border_top_left_radius.set_constant();
    self->_visibility_21.border_top_right_radius.set_constant();
    self->_visibility_21.border_width.set_constant();
    self->rectangle_22.border_color.set_constant();
    self->rectangle_22.border_radius.set_constant();
    self->rectangle_22.border_width.set_constant();
    self->text_23.color.set_constant();
    self->text_23.font_size.set_constant();
    self->text_23.font_weight.set_constant();
    self->text_23.horizontal_alignment.set_constant();
    self->text_23.vertical_alignment.set_constant();
    self->image_24.colorize.set_constant();
    self->image_24.height.set_constant();
    self->image_24.image_fit.set_constant();
    self->image_24.image_rendering.set_constant();
    self->image_24.source.set_constant();
    self->image_24.width.set_constant();
    self->rectangle_26.background.set_constant();
    self->rectangle_26.border_color.set_constant();
    self->rectangle_26.border_radius.set_constant();
    self->rectangle_26.border_width.set_constant();
    self->text_28.font_size.set_constant();
    self->text_28.font_weight.set_constant();
    self->text_28.horizontal_alignment.set_constant();
    self->text_28.text.set_constant();
    self->text_28.vertical_alignment.set_constant();
    self->text_28.width.set_constant();
    self->textlabel_29.root_1.color.set_constant();
    self->textlabel_29.root_1.font_size.set_constant();
    self->textlabel_29.root_1.font_weight.set_constant();
    self->textlabel_29.root_1.horizontal_alignment.set_constant();
    self->textlabel_29.root_1.text.set_constant();
    self->textlabel_29.root_1.vertical_alignment.set_constant();
    self->textlabel_29.root_1.width.set_constant();
    self->textlabel_29.root_1_x.set_constant();
    self->inputtext_30.root_2.background.set_constant();
    self->inputtext_30.root_2_x.set_constant();
    self->textlabel_31.root_1.color.set_constant();
    self->textlabel_31.root_1.font_size.set_constant();
    self->textlabel_31.root_1.font_weight.set_constant();
    self->textlabel_31.root_1.horizontal_alignment.set_constant();
    self->textlabel_31.root_1.text.set_constant();
    self->textlabel_31.root_1.vertical_alignment.set_constant();
    self->textlabel_31.root_1.width.set_constant();
    self->textlabel_31.root_1_x.set_constant();
    self->inputtext_32.root_2.background.set_constant();
    self->inputtext_32.root_2_x.set_constant();
    self->textlabel_33.root_1.color.set_constant();
    self->textlabel_33.root_1.font_size.set_constant();
    self->textlabel_33.root_1.font_weight.set_constant();
    self->textlabel_33.root_1.horizontal_alignment.set_constant();
    self->textlabel_33.root_1.text.set_constant();
    self->textlabel_33.root_1.vertical_alignment.set_constant();
    self->textlabel_33.root_1.width.set_constant();
    self->textlabel_33.root_1_x.set_constant();
    self->inputtext_34.root_2.background.set_constant();
    self->inputtext_34.root_2_x.set_constant();
    self->button_35.root_7_accessible_role.set_constant();
    self->button_35.root_7_icon.set_constant();
    self->button_35.root_7_primary.set_constant();
    self->button_35.root_7_text.set_constant();
    self->button_35.root_7_width.set_constant();
    self->button_35.root_7_x.set_constant();
}

inline auto Signup::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->textlabel_29.user_init();
    this->inputtext_30.user_init();
    this->textlabel_31.user_init();
    this->inputtext_32.user_init();
    this->textlabel_33.user_init();
    this->inputtext_34.user_init();
    this->button_35.user_init();
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist-Black.ttf");;
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist-Bold.ttf");;
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist-Medium.ttf");;
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist-SemiBold.ttf");;
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist-Thin.ttf");;
    self->globals->window().window_handle().register_font_from_path("C:\\Users\\Coolerputt\\Documents\\POS\\src\\SlintComponents\\fonts\\Urbanist.ttf");;
    ;
}

inline auto Signup::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_19_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(960, layout_info.max_percent, 960, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_19_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(600, layout_info.max_percent, 600, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Signup::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(960), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(960), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(400), float(450), float(255), float(100)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(50), float(260), float(680), float(12)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->text_23.height.get()), float(self->text_23.width.get()), float(12), float(14)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(16), float(16), float(222), float(17)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(4), float(260), float(0), float(48)));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_19_empty_27_layout_cache.get()[1]), float(404), float(23), float(self->root_19_empty_27_layout_cache.get()[0])));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_19_empty_27_layout_cache.get()[3]), float(404), float(23), float(self->root_19_empty_27_layout_cache.get()[2])));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(23), float(self->root_19_empty_27_layout_cache.get()[4])));
        case 11: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_19_empty_27_layout_cache.get()[7]), float(404), float(23), float(self->root_19_empty_27_layout_cache.get()[6])));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(23), float(self->root_19_empty_27_layout_cache.get()[8])));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_19_empty_27_layout_cache.get()[11]), float(404), float(23), float(self->root_19_empty_27_layout_cache.get()[10])));
        case 14: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(400), float(23), float(self->root_19_empty_27_layout_cache.get()[12])));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_19_empty_27_layout_cache.get()[15]), float(404), float(23), float(self->root_19_empty_27_layout_cache.get()[14])));
    }
    if (index == 9) {
        return self->textlabel_29.item_geometry(0);
    } else if (index == 10) {
        return self->inputtext_30.item_geometry(0);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.item_geometry(index - 15);
    } else if (index == 11) {
        return self->textlabel_31.item_geometry(0);
    } else if (index == 12) {
        return self->inputtext_32.item_geometry(0);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.item_geometry(index - 17);
    } else if (index == 13) {
        return self->textlabel_33.item_geometry(0);
    } else if (index == 14) {
        return self->inputtext_34.item_geometry(0);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.item_geometry(index - 19);
    } else if (index == 15) {
        return self->button_35.item_geometry(0);
    } else if (index >= 22 && index < 29) {
        return self->button_35.item_geometry(index - 21);
    } else return {};
}

inline auto Signup::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 5: return slint::cbindgen_private::AccessibleRole::Text;
        case 6: return slint::cbindgen_private::AccessibleRole::Image;
        case 8: return slint::cbindgen_private::AccessibleRole::Text;
        case 9: return slint::cbindgen_private::AccessibleRole::Text;
        case 11: return slint::cbindgen_private::AccessibleRole::Text;
        case 13: return slint::cbindgen_private::AccessibleRole::Text;
    }
    if (index == 9) {
        return self->textlabel_29.accessible_role(0);
    } else if (index == 10) {
        return self->inputtext_30.accessible_role(0);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.accessible_role(index - 15);
    } else if (index == 11) {
        return self->textlabel_31.accessible_role(0);
    } else if (index == 12) {
        return self->inputtext_32.accessible_role(0);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.accessible_role(index - 17);
    } else if (index == 13) {
        return self->textlabel_33.accessible_role(0);
    } else if (index == 14) {
        return self->inputtext_34.accessible_role(0);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.accessible_role(index - 19);
    } else if (index == 15) {
        return self->button_35.accessible_role(0);
    } else if (index >= 22 && index < 29) {
        return self->button_35.accessible_role(index - 21);
    } else return {};
}

inline auto Signup::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (5 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->text_23.text.get();
        case (8 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Sign-Up");
        case (9 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_29.root_1.text.get();
        case (11 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_31.root_1.text.get();
        case (13 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->textlabel_33.root_1.text.get();
    }
    if (index == 9) {
        return self->textlabel_29.accessible_string_property(0, what);
    } else if (index == 10) {
        return self->inputtext_30.accessible_string_property(0, what);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.accessible_string_property(index - 15, what);
    } else if (index == 11) {
        return self->textlabel_31.accessible_string_property(0, what);
    } else if (index == 12) {
        return self->inputtext_32.accessible_string_property(0, what);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.accessible_string_property(index - 17, what);
    } else if (index == 13) {
        return self->textlabel_33.accessible_string_property(0, what);
    } else if (index == 14) {
        return self->inputtext_34.accessible_string_property(0, what);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.accessible_string_property(index - 19, what);
    } else if (index == 15) {
        return self->button_35.accessible_string_property(0, what);
    } else if (index >= 22 && index < 29) {
        return self->button_35.accessible_string_property(index - 21, what);
    } else return {};
}

inline auto Signup::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 9) {
        return self->textlabel_29.accessibility_action(0, action);
    } else if (index == 10) {
        return self->inputtext_30.accessibility_action(0, action);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.accessibility_action(index - 15, action);
    } else if (index == 11) {
        return self->textlabel_31.accessibility_action(0, action);
    } else if (index == 12) {
        return self->inputtext_32.accessibility_action(0, action);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.accessibility_action(index - 17, action);
    } else if (index == 13) {
        return self->textlabel_33.accessibility_action(0, action);
    } else if (index == 14) {
        return self->inputtext_34.accessibility_action(0, action);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.accessibility_action(index - 19, action);
    } else if (index == 15) {
        return self->button_35.accessibility_action(0, action);
    } else if (index >= 22 && index < 29) {
        return self->button_35.accessibility_action(index - 21, action);
    } else return ;
}

inline auto Signup::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 9) {
        return self->textlabel_29.supported_accessibility_actions(0);
    } else if (index == 10) {
        return self->inputtext_30.supported_accessibility_actions(0);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.supported_accessibility_actions(index - 15);
    } else if (index == 11) {
        return self->textlabel_31.supported_accessibility_actions(0);
    } else if (index == 12) {
        return self->inputtext_32.supported_accessibility_actions(0);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.supported_accessibility_actions(index - 17);
    } else if (index == 13) {
        return self->textlabel_33.supported_accessibility_actions(0);
    } else if (index == 14) {
        return self->inputtext_34.supported_accessibility_actions(0);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.supported_accessibility_actions(index - 19);
    } else if (index == 15) {
        return self->button_35.supported_accessibility_actions(0);
    } else if (index >= 22 && index < 29) {
        return self->button_35.supported_accessibility_actions(index - 21);
    } else return {};
}

inline auto Signup::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 9) {
        return self->textlabel_29.element_infos(0);
    } else if (index == 10) {
        return self->inputtext_30.element_infos(0);
    } else if (index >= 16 && index < 18) {
        return self->inputtext_30.element_infos(index - 15);
    } else if (index == 11) {
        return self->textlabel_31.element_infos(0);
    } else if (index == 12) {
        return self->inputtext_32.element_infos(0);
    } else if (index >= 18 && index < 20) {
        return self->inputtext_32.element_infos(index - 17);
    } else if (index == 13) {
        return self->textlabel_33.element_infos(0);
    } else if (index == 14) {
        return self->inputtext_34.element_infos(0);
    } else if (index >= 20 && index < 22) {
        return self->inputtext_34.element_infos(index - 19);
    } else if (index == 15) {
        return self->button_35.element_infos(0);
    } else if (index >= 22 && index < 29) {
        return self->button_35.element_infos(index - 21);
    } else return {};
}

inline auto Signup::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->button_35.visit_dynamic_children(dyn_index - 0, order, visitor);
                    } };
        std::abort();
}

inline auto Signup::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->button_35.subtree_range(dyn_index - 0);
                    } };
        std::abort();
}

inline auto Signup::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        self->button_35.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline auto Signup::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Signup*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Signup*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Signup::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Signup::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Signup*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Signup::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Signup*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
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
        slint::private_api::make_item_node(3, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 4, 0, 1, false), 
slint::private_api::make_item_node(1, 4, 0, 2, false), 
slint::private_api::make_item_node(8, 8, 0, 3, false), 
slint::private_api::make_item_node(3, 5, 2, 4, false), 
slint::private_api::make_item_node(0, 8, 4, 5, true), 
slint::private_api::make_item_node(0, 8, 4, 6, true), 
slint::private_api::make_item_node(0, 8, 4, 7, false), 
slint::private_api::make_item_node(0, 16, 3, 8, true), 
slint::private_api::make_item_node(0, 16, 3, 9, true), 
slint::private_api::make_item_node(2, 16, 3, 10, false), 
slint::private_api::make_item_node(0, 18, 3, 11, true), 
slint::private_api::make_item_node(2, 18, 3, 12, false), 
slint::private_api::make_item_node(0, 20, 3, 13, true), 
slint::private_api::make_item_node(2, 20, 3, 14, false), 
slint::private_api::make_item_node(4, 22, 3, 15, true), 
slint::private_api::make_item_node(0, 18, 10, 16, false), 
slint::private_api::make_item_node(0, 18, 10, 17, true), 
slint::private_api::make_item_node(0, 20, 12, 18, false), 
slint::private_api::make_item_node(0, 20, 12, 19, true), 
slint::private_api::make_item_node(0, 22, 14, 20, false), 
slint::private_api::make_item_node(0, 22, 14, 21, true), 
slint::private_api::make_item_node(3, 26, 15, 22, false), 
slint::private_api::make_item_node(0, 29, 15, 23, false), 
slint::private_api::make_item_node(0, 29, 15, 24, false), 
slint::private_api::make_dyn_node(2, 15), 
slint::private_api::make_item_node(0, 29, 22, 25, false), 
slint::private_api::make_dyn_node(0, 22), 
slint::private_api::make_dyn_node(1, 22) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Signup::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(Signup, root_19) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Signup, rectangle_20) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Signup, _visibility_21) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Signup, rectangle_26) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Signup, rectangle_22) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Signup, text_23) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Signup, image_24) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Signup, rectangle_25) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Signup, text_28) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_29) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_30) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_31) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_32) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Signup, textlabel_33) +  offsetof(TextLabel_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_34) +  offsetof(InputText_root_2, root_2) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Signup, button_35) +  offsetof(Button_root_7, root_7) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_30) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_30) +  offsetof(InputText_root_2, textinput_4) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_32) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_32) +  offsetof(InputText_root_2, textinput_4) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Signup, inputtext_34) +  offsetof(InputText_root_2, rectangle_3) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Signup, inputtext_34) +  offsetof(InputText_root_2, textinput_4) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Signup, button_35) +  offsetof(Button_root_7, i_background_8) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Signup, button_35) +  offsetof(Button_root_7, i_touch_area_15) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(Signup, button_35) +  offsetof(Button_root_7, i_focus_scope_16) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Signup, button_35) +  offsetof(Button_root_7, i_border_9) } };
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

inline auto Signup::get_email () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->inputtext_32.textinput_4.text.get();
}

inline auto Signup::set_email (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->inputtext_32.textinput_4.text.set(value);
}

inline auto Signup::get_password () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->inputtext_34.textinput_4.text.get();
}

inline auto Signup::set_password (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->inputtext_34.textinput_4.text.set(value);
}

inline auto Signup::get_showToast () const -> bool{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_19_rectangle_22_show.get();
}

inline auto Signup::set_showToast (const bool &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_19_rectangle_22_show.set(value);
}

inline auto Signup::invoke_signup (slint::SharedString arg_0, slint::SharedString arg_1, slint::SharedString arg_2) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_19_signup.call(arg_0, arg_1, arg_2);
}

template<std::invocable<slint::SharedString, slint::SharedString, slint::SharedString> Functor> inline auto Signup::on_signup (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_19_signup.set_handler(std::forward<Functor>(callback_handler));
}

inline auto Signup::get_toastContent () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->text_23.text.get();
}

inline auto Signup::set_toastContent (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->text_23.text.set(value);
}

inline auto Signup::get_typeDecl () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_19_rectangle_22_type.get();
}

inline auto Signup::set_typeDecl (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_19_rectangle_22_type.set(value);
}

inline auto Signup::get_username () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->inputtext_30.textinput_4.text.get();
}

inline auto Signup::set_username (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->inputtext_30.textinput_4.text.set(value);
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
