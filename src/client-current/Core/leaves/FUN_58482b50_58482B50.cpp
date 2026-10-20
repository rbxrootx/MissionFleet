// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482B50 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58482b50_58482B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894c58h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 1F: je 0x58482b8a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CE E4 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 35 33 00: call 0x587b6140
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x35
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
