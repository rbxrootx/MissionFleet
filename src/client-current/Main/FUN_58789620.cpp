// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789620 .. +0x5E bytes.
// Source symbol alias: FUN_58789620.
extern "C" __declspec(naked) void FUN_58789620() {
    __asm {
        // 0x58789620: push ecx
        __asm _emit 0x51
        // 0x58789621: push ebp
        __asm _emit 0x55
        // 0x58789622: push edi
        __asm _emit 0x57
        // 0x58789623: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x58789626: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58789628: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5878962C: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5878962E: je 0x5878966e
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58789630: push ebx
        __asm _emit 0x53
        // 0x58789631: push esi
        __asm _emit 0x56
        // 0x58789632: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58789635: lea esi, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58789638: mov dword ptr [eax + 0xa8], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878963E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58789640: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58789642: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58789645: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58789647: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58789649: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5878964B: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5878964D: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5878964F: je 0x5878965b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58789651: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58789653: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58789655: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58789657: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58789659: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5878965B: push ebx
        __asm _emit 0x53
        // 0x5878965C: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x35
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789661: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58789664: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58789666: jne 0x58789632
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x58789668: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878966C: pop esi
        __asm _emit 0x5E
        // 0x5878966D: pop ebx
        __asm _emit 0x5B
        // 0x5878966E: pop edi
        __asm _emit 0x5F
        // 0x5878966F: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x58789672: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x58789675: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x58789678: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5878967B: pop ebp
        __asm _emit 0x5D
        // 0x5878967C: pop ecx
        __asm _emit 0x59
        // 0x5878967D: ret
        __asm _emit 0xC3
    }
}
