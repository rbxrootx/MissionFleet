// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD340 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_586ad340_586AD340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586ad35d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8E B7 00 00 00: jle 0x586ad41e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ad379
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x586ad419
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F E6 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 EB DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 28 E0 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        xor eax, 55h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 E6 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C EB DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xeb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 28 E0 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        xor eax, 55h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 32: jge 0x586ad414
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF E5 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 E5 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CD 03 00 00: call 0x586ad7e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x586ad370
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x586ad354
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
