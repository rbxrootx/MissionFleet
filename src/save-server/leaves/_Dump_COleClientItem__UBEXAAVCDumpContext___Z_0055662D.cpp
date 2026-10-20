// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055662D .. +0x1C9 bytes.
extern "C" __declspec(naked) void _Dump_COleClientItem__UBEXAAVCDumpContext___Z_0055662D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 AC FF FF: call 0x551252
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        push 67c43ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 24 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        push 67c44ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 23 FD FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        push 67c460h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 24 FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 67c474h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 23 FD FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 67c484h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D 24 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 67c494h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 24 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 67c4a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 23 FD FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 40h]
        push ecx
        push 67c4bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 22 FD FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 41h]
        push eax
        push 67c4d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 22 FD FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        push edx
        push 67c4e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 21 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 23 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 43h]
        push ecx
        push 67c4f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 22 FD FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        push 67c508h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 23 FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        push edx
        push 67c51ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 85 23 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        push 67c528h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 22 FD FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        push 67c540h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 23 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 67c554h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 20 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 23 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
