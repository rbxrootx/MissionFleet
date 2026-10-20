// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426325 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00426325_00426325() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 36 06 00: call 0x4899f7
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x426352
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 08 02 00: call 0x446c1e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x426354
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 82 24 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
