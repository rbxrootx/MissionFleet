// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 221 bytes in 1 exact ranges.
// Source symbol alias: FUN_58826f60.

// Ghidra body range 0x58826F60..0x5882703D; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_58826f60_segment_00() {
    __asm {
        // 0x58826F60: push ebx
        __asm _emit 0x53
        // 0x58826F61: push ebp
        __asm _emit 0x55
        // 0x58826F62: push esi
        __asm _emit 0x56
        // 0x58826F63: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58826F65: push edi
        __asm _emit 0x57
        // 0x58826F66: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58826F68: lea esi, [ebp + 0x240]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F6E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58826F70: movzx eax, byte ptr [ebp + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F77: lea ecx, [eax + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x18
        // 0x58826F7A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58826F7C: mov eax, dword ptr [esi - 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF8
        // 0x58826F7F: jge 0x58826fdb
        __asm _emit 0x7D
        __asm _emit 0x5A
        // 0x58826F81: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58826F86: movzx edx, byte ptr [ebp + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F8D: mov eax, dword ptr [ebp + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F93: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58826F95: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58826F97: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x58826F9A: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FA0: push ecx
        __asm _emit 0x51
        // 0x58826FA1: push edx
        __asm _emit 0x52
        // 0x58826FA2: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58826FA8: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FAE: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58826FB1: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58826FB3: inc eax
        __asm _emit 0x40
        // 0x58826FB4: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58826FB6: jne 0x58826fb1
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58826FB8: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58826FBA: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FC0: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FC6: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58826FC9: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FCE: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58826FD2: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58826FD5: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58826FD9: jmp 0x5882702b
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x58826FDB: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FE0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58826FE4: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58826FE6: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FEC: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58826FF1: push edx
        __asm _emit 0x52
        // 0x58826FF2: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58826FF8: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826FFE: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58827001: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58827003: inc eax
        __asm _emit 0x40
        // 0x58827004: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58827006: jne 0x58827001
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827008: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5882700A: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827010: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827016: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58827019: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882701E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58827022: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58827025: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58827027: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882702B: inc ebx
        __asm _emit 0x43
        // 0x5882702C: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5882702F: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x58827032: jl 0x58826f70
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827038: pop edi
        __asm _emit 0x5F
        // 0x58827039: pop esi
        __asm _emit 0x5E
        // 0x5882703A: pop ebp
        __asm _emit 0x5D
        // 0x5882703B: pop ebx
        __asm _emit 0x5B
        // 0x5882703C: ret
        __asm _emit 0xC3
    }
}
