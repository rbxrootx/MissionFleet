// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585089C0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_585089c0_585089C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 13: je 0x585089e5
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        add ecx, 18h
        ; Exact mapped bytes E8 60 17 00 00: call 0x5850a140
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x585089ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 58895250h
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
