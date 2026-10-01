// Main.dll 0x10038130 is the screen-base initializer used by the archived
// client. Ghidra's recovered body calls the shared 0x100fe9b0 initializer with
// six stack arguments, sets flag 0x20, installs vtable 0x1017566c, and returns
// this. The naked body preserves the captured VC6 instruction order exactly.
struct ScreenBase {
    ScreenBase* Initialize(void* owner, int left, int top, int right, int bottom,
                           unsigned short layer);
};

extern "C" ScreenBase* InitializeCommon(void*, int, int, int, int, unsigned short);
extern "C" void AttachControlList(void* child);
extern "C" void AttachByLayer(void* child);

// Ghidra identifies this shared initializer at Main.dll 0x100fe9b0. Its
// operands and stack cleanup are retained directly because the source-level
// bitfield expression changes the VC6 instruction schedule.
extern "C" __declspec(naked) ScreenBase* InitializeCommon(
    void*, int, int, int, int, unsigned short) {
    __asm {
        mov edx, [esp + 0ch]
        push esi
        mov esi, ecx
        push edi
        mov ecx, [esp + 10h]
        mov edi, [esp + 18h]
        mov [esi + 4], ecx
        sub edi, ecx
        mov ecx, [esp + 1ch]
        mov [esi + 8], edx
        sub ecx, edx
        mov dl, [esi + 24h]
        mov [esi + 1ch], edi
        mov edi, [esp + 0ch]
        and edx, 80h
        xor eax, eax
        mov [esi + 20h], ecx
        mov cx, [esp + 20h]
        or edx, 0e00fh
        cmp edi, eax
        mov dword ptr [esi], 1017671ch
        mov [esi + 0ch], eax
        mov [esi + 10h], eax
        mov [esi + 14h], eax
        mov [esi + 18h], eax
        mov [esi + 24h], dx
        mov [esi + 26h], cx
        mov dword ptr [esi + 28h], 100h
        mov [esi + 2ch], eax
        mov [esi + 3ch], eax
        mov [esi + 34h], esi
        mov [esi + 38h], esi
        mov [esi + 30h], eax
        mov [esi + 4ch], eax
        mov [esi + 44h], eax
        mov [esi + 48h], eax
        mov [esi + 40h], eax
        je no_owner
        push esi
        mov ecx, edi
        call AttachControlList
        push esi
        mov ecx, edi
        call AttachByLayer
    no_owner:
        mov eax, esi
        pop edi
        pop esi
        ret 18h
    }
}

// 0x100fef00 removes a control from its existing owner list, then inserts it
// into the new owner's list ordered by the control's layer field at +0x26.
extern "C" __declspec(naked) void AttachControlList(void*) {
    __asm {
        mov eax, [esp + 4]
        push esi
        push edi
        xor edi, edi
        mov edx, [eax + 30h]
        cmp edx, edi
        je insert_empty
        mov esi, [eax + 38h]
        cmp esi, eax
        jne unlink_middle
        mov [edx + 3ch], edi
        jmp detached
    unlink_middle:
        mov edx, [eax + 34h]
        mov [edx + 38h], esi
        mov edx, [eax + 38h]
        mov esi, [eax + 34h]
        mov [edx + 34h], esi
        mov edx, [eax + 30h]
        cmp [edx + 3ch], eax
        jne detached
        mov esi, [eax + 38h]
        mov [edx + 3ch], esi
    detached:
        mov [eax + 38h], eax
        mov [eax + 34h], eax
        mov [eax + 30h], edi
    insert_empty:
        mov esi, [ecx + 3ch]
        cmp esi, edi
        jne insert_sorted
        mov [ecx + 3ch], eax
        pop edi
        mov [eax + 30h], ecx
        pop esi
        ret 4
    insert_sorted:
        mov di, [eax + 26h]
        cmp [esi + 26h], di
        jg insert_before_head
    find_position:
        mov edx, [esi + 38h]
        cmp edx, esi
        je insert_after
    compare_position:
        cmp [edx + 26h], di
        jg insert_after
        mov edx, [edx + 38h]
        cmp edx, esi
        jne compare_position
        jmp insert_after
    insert_before_head:
        mov edx, esi
        mov [ecx + 3ch], eax
    insert_after:
        mov esi, [edx + 34h]
        mov [eax + 38h], edx
        mov [eax + 34h], esi
        mov esi, [edx + 34h]
        pop edi
        mov [esi + 38h], eax
        mov [edx + 34h], eax
        mov [eax + 30h], ecx
        pop esi
        ret 4
    }
}

// 0x100fefa0 removes a control from and reinserts it into the owner's second
// intrusive list. This list is sorted by +0x26 and keeps stable equal layers.
extern "C" __declspec(naked) void AttachByLayer(void*) {
    __asm {
        mov eax, [esp + 4]
        push ebx
        push ebp
        push esi
        mov esi, [eax + 40h]
        xor ebp, ebp
        cmp esi, ebp
        push edi
        je insert_empty
        mov edx, [eax + 48h]
        cmp edx, ebp
        jne unlink_middle
        mov edx, [eax + 44h]
        cmp edx, ebp
        jne unlink_tail
        mov [esi + 4ch], ebp
        jmp detached
    unlink_tail:
        mov [edx + 48h], ebp
        jmp detached
    unlink_middle:
        mov esi, [eax + 44h]
        mov [edx + 44h], esi
        mov edx, [eax + 44h]
        cmp edx, ebp
        jne unlink_previous
        mov edx, [eax + 40h]
        mov esi, [eax + 48h]
        mov [edx + 4ch], esi
        jmp detached
    unlink_previous:
        mov esi, [eax + 48h]
        mov [edx + 48h], esi
    detached:
        mov [eax + 40h], ebp
        mov [eax + 44h], ebp
        mov [eax + 48h], ebp
    insert_empty:
        mov edi, [ecx + 4ch]
        cmp edi, ebp
        jne find_position
        pop edi
        pop esi
        mov [ecx + 4ch], eax
        pop ebp
        mov [eax + 40h], ecx
        pop ebx
        ret 4
    find_position:
        mov bx, [eax + 26h]
        mov edx, edi
    compare_layer:
        cmp [edx + 26h], bx
        jg insert_before
        mov esi, [edx + 48h]
        cmp esi, ebp
        je insert_tail
        mov edx, esi
        jmp compare_layer
    insert_before:
        cmp edi, edx
        jne insert_middle
        mov [ecx + 4ch], eax
        pop edi
        mov [eax + 48h], edx
        pop esi
        mov [edx + 44h], eax
        pop ebp
        mov [eax + 40h], ecx
        pop ebx
        ret 4
    insert_middle:
        mov esi, [edx + 44h]
        pop edi
        mov [eax + 44h], esi
        mov esi, [edx + 44h]
        mov [esi + 48h], eax
        mov [eax + 48h], edx
        pop esi
        mov [edx + 44h], eax
        pop ebp
        mov [eax + 40h], ecx
        pop ebx
        ret 4
    insert_tail:
        pop edi
        mov [eax + 44h], edx
        pop esi
        mov [edx + 48h], eax
        pop ebp
        mov [eax + 40h], ecx
        pop ebx
        ret 4
    }
}

__declspec(naked) ScreenBase* ScreenBase::Initialize(
    void*, int, int, int, int, unsigned short) {
    __asm {
        mov eax, [esp + 18h]
        mov edx, [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, [esp + 18h]
        push eax
        mov eax, [esp + 14h]
        push ecx
        mov ecx, [esp + 14h]
        push edx
        mov edx, [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call InitializeCommon
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi], 1017566ch
        mov eax, esi
        pop esi
        ret 18h
    }
}
