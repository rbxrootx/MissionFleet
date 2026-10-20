// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B27B0 .. +0xB7 bytes.
extern "C" __declspec(naked) void _CatchIt__YAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PAXPBU_s_FuncInfo__PBU_s_HandlerType__PBU_s_CatchableType__PBU_s_TryBlockMapEntry__H1E_Z_004B27B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 18: je 0x4b27da
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 39 02 00 00: call 0x4b2a10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 75 0F: jne 0x4b27ef
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D3 63 FF FF: call 0x4a8bc0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x4b27fc
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 2ch]
        push edx
        ; Exact mapped bytes E8 C4 63 FF FF: call 0x4a8bc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 6D FE FF FF: call 0x4b2680
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], eax
        push 100h
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 26 00 00 00: call 0x4b2870
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0D: je 0x4b2863
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 ED 62 FF FF: call 0x4a8b50
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
