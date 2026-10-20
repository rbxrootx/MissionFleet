// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570560 .. +0x2A bytes.
extern "C" __declspec(naked) void _BeginBusyState_COleMessageFilter__UAEXXZ_00570560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4ah
        push 67ad48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 9C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
