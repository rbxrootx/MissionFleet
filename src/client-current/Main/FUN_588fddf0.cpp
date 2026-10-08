// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 531 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fddf0.

// Ghidra body range 0x588FDDF0..0x588FE003; 531 mapped bytes.
extern "C" __declspec(naked) void FUN_588fddf0_segment_00() {
    __asm {
        // 0x588FDDF0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FDDF3: push ebx
        __asm _emit 0x53
        // 0x588FDDF4: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FDDF8: push esi
        __asm _emit 0x56
        // 0x588FDDF9: push edi
        __asm _emit 0x57
        // 0x588FDDFA: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FDDFE: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDE06: lea edi, [ecx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDE0C: push ebp
        __asm _emit 0x55
        // 0x588FDE0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FDE10: mov eax, dword ptr [edi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xD8
        // 0x588FDE13: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FDE16: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588FDE19: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x588FDE1B: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDE1D: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDE1F: jl 0x588fde42
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x588FDE21: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588FDE24: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDE26: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDE28: jge 0x588fde42
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x588FDE2A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FDE2D: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588FDE30: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDE32: cmp dword ptr [ebx + 4], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x588FDE35: jl 0x588fde42
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x588FDE37: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x588FDE3A: add edx, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FDE3D: cmp dword ptr [ebx + 4], edx
        __asm _emit 0x39
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x588FDE40: jl 0x588fdea6
        __asm _emit 0x7C
        __asm _emit 0x64
        // 0x588FDE42: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588FDE44: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588FDE47: mov ebp, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588FDE4A: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FDE4C: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDE4E: jl 0x588fde71
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x588FDE50: mov ebp, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x588FDE53: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FDE55: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDE57: jge 0x588fde71
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x588FDE59: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588FDE5C: mov ebp, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588FDE5F: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x588FDE62: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FDE64: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDE66: jl 0x588fde71
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588FDE68: mov edx, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x20
        // 0x588FDE6B: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588FDE6D: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588FDE6F: jl 0x588fde9b
        __asm _emit 0x7C
        __asm _emit 0x2A
        // 0x588FDE71: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FDE75: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FDE77: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDE7A: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDE7D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588FDE7F: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDE82: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDE85: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FDE89: inc eax
        __asm _emit 0x40
        // 0x588FDE8A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588FDE8D: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588FDE90: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FDE94: jge 0x588fdec6
        __asm _emit 0x7D
        __asm _emit 0x30
        // 0x588FDE96: jmp 0x588fde10
        __asm _emit 0xE9
        __asm _emit 0x75
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDE9B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FDE9F: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x588FDEA2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FDEA4: jmp 0x588fdeab
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588FDEA6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FDEA8: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x588FDEAB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FDEAF: mov eax, dword ptr [ecx + edi*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xB9
        __asm _emit 0x64
        // 0x588FDEB3: mov dword ptr [eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588FDEB6: mov dword ptr [eax + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588FDEB9: mov eax, dword ptr [ecx + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDEC0: mov dword ptr [eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588FDEC3: mov dword ptr [eax + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588FDEC6: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDECC: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDECF: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDED2: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDED8: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDEDB: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDEDE: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDEE4: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588FDEE7: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588FDEEA: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x588FDEEC: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDEEE: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDEF0: jl 0x588fdf22
        __asm _emit 0x7C
        __asm _emit 0x30
        // 0x588FDEF2: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588FDEF5: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDEF7: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDEF9: jge 0x588fdf22
        __asm _emit 0x7D
        __asm _emit 0x27
        // 0x588FDEFB: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x588FDEFE: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588FDF01: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x588FDF04: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDF06: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDF08: jl 0x588fdf22
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x588FDF0A: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FDF0D: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x588FDF0F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FDF11: jge 0x588fdf22
        __asm _emit 0x7D
        __asm _emit 0x0F
        // 0x588FDF13: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDF19: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x588FDF1C: mov dword ptr [eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588FDF1F: mov dword ptr [eax + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588FDF22: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDF28: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588FDF2B: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588FDF2E: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x588FDF30: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDF32: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDF34: jl 0x588fdf62
        __asm _emit 0x7C
        __asm _emit 0x2C
        // 0x588FDF36: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588FDF39: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDF3B: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDF3D: jge 0x588fdf62
        __asm _emit 0x7D
        __asm _emit 0x23
        // 0x588FDF3F: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x588FDF42: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588FDF45: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x588FDF48: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDF4A: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDF4C: jl 0x588fdf62
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588FDF4E: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x20
        // 0x588FDF51: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588FDF53: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588FDF55: jge 0x588fdf62
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x588FDF57: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588FDF5A: mov dword ptr [eax + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x588FDF5D: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588FDF60: jmp 0x588fdf65
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588FDF62: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588FDF65: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDF6B: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDF6E: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDF71: mov eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDF77: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FDF7A: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FDF7D: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDF83: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FDF86: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588FDF89: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x588FDF8B: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDF8D: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDF8F: jl 0x588fdfbe
        __asm _emit 0x7C
        __asm _emit 0x2D
        // 0x588FDF91: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588FDF94: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDF96: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDF98: jge 0x588fdfbe
        __asm _emit 0x7D
        __asm _emit 0x24
        // 0x588FDF9A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FDF9D: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588FDFA0: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x588FDFA3: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x588FDFA5: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588FDFA7: jl 0x588fdfbe
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588FDFA9: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FDFAC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FDFAE: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588FDFB0: jge 0x588fdfbe
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x588FDFB2: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDFB8: mov dword ptr [eax + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x588FDFBB: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588FDFBE: mov eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDFC4: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588FDFC7: mov esi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x588FDFCA: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588FDFCC: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x588FDFCE: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588FDFD0: pop ebp
        __asm _emit 0x5D
        // 0x588FDFD1: jl 0x588fdffa
        __asm _emit 0x7C
        __asm _emit 0x27
        // 0x588FDFD3: mov esi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x588FDFD6: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x588FDFD8: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588FDFDA: jge 0x588fdffa
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x588FDFDC: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FDFDF: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588FDFE2: mov ebx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x04
        // 0x588FDFE5: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588FDFE7: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FDFE9: jl 0x588fdffa
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588FDFEB: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x588FDFEE: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588FDFF0: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FDFF2: jge 0x588fdffa
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588FDFF4: mov dword ptr [eax + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x588FDFF7: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588FDFFA: pop edi
        __asm _emit 0x5F
        // 0x588FDFFB: pop esi
        __asm _emit 0x5E
        // 0x588FDFFC: pop ebx
        __asm _emit 0x5B
        // 0x588FDFFD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FE000: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
