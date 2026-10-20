// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C2C80 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_586c2c80_586C2C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586c2c9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 0F 8D E9 00 00 00: jge 0x586c2d8f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 22ch]
        ; Exact mapped bytes E8 B3 DF 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, eax
        add esi, dword ptr [ebp - 4]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 22ch]
        ; Exact mapped bytes E8 17 6A E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6a
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 78: jge 0x586c2d55
        __asm _emit 0x7d
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 258h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 22ch]
        ; Exact mapped bytes E8 59 DF 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 DE 0F 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 08 CB DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 258h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8E 31 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x31
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x586c2d8a
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 258h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D1 CA DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 258h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 57 31 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x31
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x586c2c93
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
