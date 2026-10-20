// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048AA62 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0048aa62_0048AA62() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 06: jne 0x48aa7c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x48aa8c
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 10 00 00: call 0x48baab
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 48 DD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
