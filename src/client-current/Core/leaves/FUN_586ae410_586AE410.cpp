// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AE410 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_586ae410_586AE410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 78h], ecx
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 2d9h
        mov dword ptr [ebp - 34h], 0b7bh
        mov dword ptr [ebp - 30h], 1a2bh
        mov dword ptr [ebp - 2ch], 2f64h
        mov dword ptr [ebp - 28h], 4be5h
        mov dword ptr [ebp - 24h], 70c4h
        mov dword ptr [ebp - 20h], 9f8dh
        mov dword ptr [ebp - 1ch], 0da84h
        mov dword ptr [ebp - 18h], 124f8h
        mov dword ptr [ebp - 14h], 183f1h
        mov dword ptr [ebp - 10h], 1ff62h
        mov dword ptr [ebp - 0ch], 2a495h
        mov dword ptr [ebp - 8], 2e121h
        mov edx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 D7 17 E0 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 0C: jne 0x586ae4d0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp + edx*4 - 3ch]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 2C: jmp 0x586ae4fc
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp + ecx*4 - 3ch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp + eax*4 - 38h]
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 58h]
        sub eax, dword ptr [ebp - 50h]
        cdq
        mov ecx, 0ah
        idiv ecx
        imul eax, dword ptr [ebp - 4ch]
        add eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 7F CC 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 34 2B 18 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0x18
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
