// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58900340 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_58900340() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 02: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x589003f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 3B 86 98 00 00 00: cmp eax, dword ptr [esi + 0x98]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x589003bd
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes B8 14 00 00 00: mov eax, 0x14
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 41 60: cmp dword ptr [ecx + 0x60], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 7F 1C: jg 0x58900383
        __asm _emit 0x7f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 56 78: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x78
        ; Exact mapped bytes 39 42 60: cmp dword ptr [edx + 0x60], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x60
        ; Exact mapped bytes 7F 14: jg 0x58900383
        __asm _emit 0x7f
        __asm _emit 0x14
        ; Exact mapped bytes 6A 11: push 0x11
        __asm _emit 0x6a
        __asm _emit 0x11
        ; Exact mapped bytes E8 4A 71 FF FF: call 0x588f74c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 03 72 FF FF: call 0x588f7580
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 30: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 46 30: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x30
        ; Exact mapped bytes 8B 52 18: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 56 60: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 18: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 48 EE 00 00: push 0xee48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 A0 00 00 00: cmp eax, dword ptr [esi + 0xa0]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 31: jne 0x589003f6
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 30: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x30
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 46 30: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x30
        ; Exact mapped bytes 8B 52 18: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4E 30: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x30
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 68 48 EE 00 00: push 0xee48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
