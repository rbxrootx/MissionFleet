// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2F66 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_004d2f66_004D2F66() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 116h
        push 5d0e18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E0 81 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 40000h
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4d2fa0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 00 00 00: call 0x4d2fb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 40 36: movsx eax, word ptr [eax + 0x36]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x36
        ; Exact mapped bytes EB 0C: jmp 0x4d2fac
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 20: mov ax, word ptr [edx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}
