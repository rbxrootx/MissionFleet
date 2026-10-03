// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B66E0 .. +0xA5 bytes.
// Source symbol alias: FUN_587b66e0.
extern "C" __declspec(naked) void FUN_587b66e0() {
    __asm {
        // 0x587B66E0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B66E4: push ebx
        __asm _emit 0x53
        // 0x587B66E5: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B66E9: push ebp
        __asm _emit 0x55
        // 0x587B66EA: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B66EE: push esi
        __asm _emit 0x56
        // 0x587B66EF: push edi
        __asm _emit 0x57
        // 0x587B66F0: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B66F4: push eax
        __asm _emit 0x50
        // 0x587B66F5: push ebx
        __asm _emit 0x53
        // 0x587B66F6: push ebp
        __asm _emit 0x55
        // 0x587B66F7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B66F9: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B66FD: push edi
        __asm _emit 0x57
        // 0x587B66FE: push ecx
        __asm _emit 0x51
        // 0x587B66FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6701: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xE3
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587B6706: mov dx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B670B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B670D: mov dword ptr [esi], 0x5899a0b0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB0
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B6713: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x587B6716: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587B6719: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587B671D: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x58
        // 0x587B6720: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x587B6723: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587B6726: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587B6729: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587B672B: je 0x587b6753
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587B672D: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587B6730: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B6733: mov edx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x587B6736: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x587B6739: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587B673C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587B673E: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587B6741: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B6744: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587B6747: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B674A: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x587B674D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587B6750: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587B6753: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B6758: pop edi
        __asm _emit 0x5F
        // 0x587B6759: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587B675C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587B675F: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587B6762: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587B6765: mov dword ptr [esi + 0x64], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B676C: mov dword ptr [esi + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587B676F: mov dword ptr [esi + 0x74], 0xa
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6776: mov dword ptr [esi + 0x78], 0x384
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B677D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B677F: pop esi
        __asm _emit 0x5E
        // 0x587B6780: pop ebp
        __asm _emit 0x5D
        // 0x587B6781: pop ebx
        __asm _emit 0x5B
        // 0x587B6782: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
