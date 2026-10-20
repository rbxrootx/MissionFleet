// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005251CB .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_005251cb_005251CB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 3f9h
        push 5c8174h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 76 5F FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x525204
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fah
        push 5c8174h
        ; Exact mapped bytes E8 01 F8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525204
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5251ea
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584d10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 5E FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52522f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fbh
        push 5c8174h
        ; Exact mapped bytes E8 D6 F7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52522f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52520a
        __asm _emit 0x75
        __asm _emit 0xd5
        push 3fch
        push 5c8174h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 18 5F FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 C9 D4 00 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x525352
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 405h
        push 5c8174h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 68 D3 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 28h
        push eax
        ; Exact mapped bytes E8 B1 7D FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 48 D3 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 70 3D F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 44 81 FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5ch], edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 05 D3 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        push 28h
        mov edx, dword ptr [ebp + 8]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 24 3D F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 EC 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A E4 FF FF: call 0x52376e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC 1E 5E 00: call dword ptr [0x5e1ebc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x52532c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 80 AA FA FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 467h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A 68 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x525352
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B8 1E 5E 00: call dword ptr [0x5e1eb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A AA FA FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
