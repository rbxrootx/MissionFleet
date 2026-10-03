// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 262 bytes across one range.

// Ghidra range: 0x58853870 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_58853870_segment_00() {
    __asm {
        // 0x58853870: push ebp
        __asm _emit 0x55
        // 0x58853871: push esi
        __asm _emit 0x56
        // 0x58853872: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853874: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58853878: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885387D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58853880: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853885: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58853888: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5885388C: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853891: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58853895: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5885389A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5885389D: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538A3: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588538A6: mov dword ptr [esi + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588538A9: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538B0: mov dword ptr [eax + 0x54], 0xffffffc4
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588538B7: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538BD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588538BF: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588538C2: push edi
        __asm _emit 0x57
        // 0x588538C3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588538C5: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538CB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588538CD: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588538D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588538D2: mov ebp, 0x3d
        __asm _emit 0xBD
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538D7: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588538E0: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588538E3: add ecx, 0x68
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x68
        // 0x588538E6: push ecx
        __asm _emit 0x51
        // 0x588538E7: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588538EA: push ebp
        __asm _emit 0x55
        // 0x588538EB: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588538F0: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588538F3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588538F5: add edx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588538FB: push edx
        __asm _emit 0x52
        // 0x588538FC: push ebp
        __asm _emit 0x55
        // 0x588538FD: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x27
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58853902: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58853905: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853907: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885390A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885390C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5885390E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58853910: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58853913: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853915: add ebp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x4C
        // 0x58853918: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5885391B: cmp ebp, 0x16d
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853921: jl 0x588538e0
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x58853923: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853929: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885392B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885392E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58853930: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58853933: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853938: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885393C: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5885393F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58853941: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58853945: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885394A: cmp byte ptr [eax + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5885394E: pop edi
        __asm _emit 0x5F
        // 0x5885394F: jne 0x58853973
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58853951: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853957: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885395A: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5885395D: mov dword ptr [eax + 0x54], 0x500
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853964: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885396A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885396C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5885396F: pop esi
        __asm _emit 0x5E
        // 0x58853970: pop ebp
        __asm _emit 0x5D
        // 0x58853971: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58853973: pop esi
        __asm _emit 0x5E
        // 0x58853974: pop ebp
        __asm _emit 0x5D
        // 0x58853975: ret
        __asm _emit 0xC3
    }
}
