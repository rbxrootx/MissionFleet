// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ECC60 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_586ecc60_586ECC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 19: je 0x586ecc88
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b88h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 2B DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586ecc9f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b88h]
        mov dword ptr [ebp - 0ch], eax
        push 5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 2B DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
