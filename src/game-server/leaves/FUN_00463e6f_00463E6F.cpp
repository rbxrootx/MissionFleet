// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463E6F .. +0x1D4 bytes.
extern "C" __declspec(naked) void FUN_00463e6f_00463E6F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 76 2A: jbe 0x463ec0
        __asm _emit 0x76
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes DF 6D F4: fild qword ptr [ebp - 0xc]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xf4
        ; Exact mapped bytes D8 0D 18 1C 58 00: fmul dword ptr [0x581c18]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 45 56 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 13ch], 0
        ; Exact mapped bytes 76 2A: jbe 0x463ef6
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes DF 6D EC: fild qword ptr [ebp - 0x14]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xec
        ; Exact mapped bytes D8 0D 18 1C 58 00: fmul dword ptr [0x581c18]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F 56 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 13ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 144h], 0
        ; Exact mapped bytes 7E 1D: jle 0x463f1f
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DB 81 44 01 00 00: fild dword ptr [ecx + 0x144]
        __asm _emit 0xdb
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 6C 10 58 00: fmul dword ptr [0x58106c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 55 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 144h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 76 2A: jbe 0x463f55
        __asm _emit 0x76
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes DF 6D E4: fild qword ptr [ebp - 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe4
        ; Exact mapped bytes D8 0D 6C 10 58 00: fmul dword ptr [0x58106c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 55 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 140h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x46403e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 76 2A: jbe 0x463fa9
        __asm _emit 0x76
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes DF 6D DC: fild qword ptr [ebp - 0x24]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xdc
        ; Exact mapped bytes D8 0D 14 1C 58 00: fmul dword ptr [0x581c14]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 55 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 13ch], 0
        ; Exact mapped bytes 76 2A: jbe 0x463fdf
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes DF 6D D4: fild qword ptr [ebp - 0x2c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xd4
        ; Exact mapped bytes D8 0D 14 1C 58 00: fmul dword ptr [0x581c14]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 55 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 13ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 144h], 0
        ; Exact mapped bytes 7E 1D: jle 0x464008
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DB 81 44 01 00 00: fild dword ptr [ecx + 0x144]
        __asm _emit 0xdb
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 14 1C 58 00: fmul dword ptr [0x581c14]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 54 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 144h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 76 2A: jbe 0x46403e
        __asm _emit 0x76
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes DF 6D CC: fild qword ptr [ebp - 0x34]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xcc
        ; Exact mapped bytes D8 0D 14 1C 58 00: fmul dword ptr [0x581c14]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 54 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 140h], eax
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
