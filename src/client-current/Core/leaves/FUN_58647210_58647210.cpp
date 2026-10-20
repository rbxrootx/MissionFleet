// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58647210 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58647210_58647210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1c8h], 0
        ; Exact mapped bytes 74 32: je 0x58647257
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1c8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A 59 F0 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x59
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
