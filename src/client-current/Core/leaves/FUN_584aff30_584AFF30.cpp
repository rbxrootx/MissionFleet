// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AFF30 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_584aff30_584AFF30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        push 0d4h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0e4h
        push eax
        ; Exact mapped bytes E8 C2 CE 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xce
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a0h
        push ecx
        ; Exact mapped bytes E8 AC CE 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xce
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 5F FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 5F FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 5F FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 18h], edx
        push 5f3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 4B FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 5F FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F 5F FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 24h], ecx
        push 0c7h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 4A FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 24 6C FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EE F7 FE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 2ch], eax
        push 60h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D8 54 30 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 30h], edx
        push 60h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C2 54 30 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 34h], ecx
        push 60h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AC 54 30 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1e0h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2D 5E FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1e0h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0E 5E FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
