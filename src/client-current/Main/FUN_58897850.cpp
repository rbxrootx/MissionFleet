// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 214 bytes in 1 exact ranges.
// Source symbol alias: FUN_58897850.

// Ghidra body range 0x58897850..0x58897926; 214 mapped bytes.
extern "C" __declspec(naked) void FUN_58897850_segment_00() {
    __asm {
        // 0x58897850: push ebx
        __asm _emit 0x53
        // 0x58897851: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58897855: push ebp
        __asm _emit 0x55
        // 0x58897856: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889785A: push esi
        __asm _emit 0x56
        // 0x5889785B: push edi
        __asm _emit 0x57
        // 0x5889785C: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58897860: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58897862: mov ecx, dword ptr [esi + edi*4 + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xBE
        __asm _emit 0x68
        // 0x58897866: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58897869: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889786C: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5889786E: push eax
        __asm _emit 0x50
        // 0x5889786F: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58897871: push edx
        __asm _emit 0x52
        // 0x58897872: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897877: mov ecx, dword ptr [esi + edi*4 + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889787E: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58897881: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58897884: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58897886: push eax
        __asm _emit 0x50
        // 0x58897887: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58897889: push edx
        __asm _emit 0x52
        // 0x5889788A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889788F: mov ecx, dword ptr [esi + edi*4 + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897896: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58897899: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889789C: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5889789E: push eax
        __asm _emit 0x50
        // 0x5889789F: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x588978A1: push edx
        __asm _emit 0x52
        // 0x588978A2: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588978A7: mov ecx, dword ptr [esi + edi*4 + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588978AE: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588978B1: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588978B4: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588978B6: push eax
        __asm _emit 0x50
        // 0x588978B7: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x588978B9: push edx
        __asm _emit 0x52
        // 0x588978BA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588978BF: mov ecx, dword ptr [esi + edi*4 + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588978C6: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588978C9: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588978CC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588978CE: push eax
        __asm _emit 0x50
        // 0x588978CF: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x588978D1: push edx
        __asm _emit 0x52
        // 0x588978D2: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588978D7: mov ecx, dword ptr [esi + edi*4 + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588978DE: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588978E1: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588978E4: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588978E6: push eax
        __asm _emit 0x50
        // 0x588978E7: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x588978E9: push edx
        __asm _emit 0x52
        // 0x588978EA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588978EF: mov ecx, dword ptr [esi + edi*4 + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588978F6: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588978F9: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588978FC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588978FE: push eax
        __asm _emit 0x50
        // 0x588978FF: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58897901: push edx
        __asm _emit 0x52
        // 0x58897902: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897907: mov ecx, dword ptr [esi + edi*4 + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889790E: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58897911: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58897914: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58897916: push eax
        __asm _emit 0x50
        // 0x58897917: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58897919: push edx
        __asm _emit 0x52
        // 0x5889791A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889791F: pop edi
        __asm _emit 0x5F
        // 0x58897920: pop esi
        __asm _emit 0x5E
        // 0x58897921: pop ebp
        __asm _emit 0x5D
        // 0x58897922: pop ebx
        __asm _emit 0x5B
        // 0x58897923: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
