// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B89A0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_584b89a0_584B89A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1F: je 0x584b89d1
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 F7 FC FF: call 0x58488170
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
