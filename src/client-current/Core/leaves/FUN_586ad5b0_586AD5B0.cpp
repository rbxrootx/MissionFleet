// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD5B0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_586ad5b0_586AD5B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586ad5cd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8E 9B 00 00 00: jle 0x586ad672
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ad5e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 7C: jge 0x586ad66d
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 E3 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC E8 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 BF E3 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 E3 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC E8 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 BF E3 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 32: jle 0x586ad668
        __asm _emit 0x7e
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B E3 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C E3 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 79 01 00 00: call 0x586ad7e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x586ad5e0
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ad5c4
        __asm _emit 0xe9
        __asm _emit 0x52
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
