// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAC7A .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_004fac7a_004FAC7A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 326h
        push 674fe8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C9 F5 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 77 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 0E 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 09: jne 0x4facb9
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4faccd
        __asm _emit 0x74
        __asm _emit 0x14
        push 329h
        push 674fe8h
        ; Exact mapped bytes E8 78 E0 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4faccd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4faca8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 78 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 16: je 0x4fad0c
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 B0 6D 68 00: mov eax, dword ptr [0x686db0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 17: je 0x4fad2c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 15 B4 6D 68 00: mov edx, dword ptr [0x686db4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], ecx
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
