// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567BDA .. +0x33 bytes.
extern "C" __declspec(naked) void _EndBusyState_COleMessageFilter__UAEXXZ_00567BDA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 50h
        push 5ce570h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6F 35 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0F: je 0x567c09
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
