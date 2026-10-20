// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465252 .. +0x68 bytes.
extern "C" __declspec(naked) void __local_unwind2_00465252() {
    __asm {
        push ebx
        push esi
        push edi
        mov eax, dword ptr [esp + 10h]
        push eax
        push -2
        push 465230h
        ; Exact mapped bytes 64 FF 35 00 00 00 00: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        mov ebx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 0ch]
        cmp esi, -1
        ; Exact mapped bytes 74 2E: je 0x4652ac
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp esi, dword ptr [esp + 24h]
        ; Exact mapped bytes 74 28: je 0x4652ac
        __asm _emit 0x74
        __asm _emit 0x28
        lea esi, [esi + esi*2]
        mov ecx, dword ptr [ebx + esi*4]
        mov dword ptr [esp + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        cmp dword ptr [ebx + esi*4 + 4], 0
        ; Exact mapped bytes 75 12: jne 0x4652aa
        __asm _emit 0x75
        __asm _emit 0x12
        push 101h
        mov eax, dword ptr [ebx + esi*4 + 8]
        ; Exact mapped bytes E8 40 00 00 00: call 0x4652e6
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 54 B3 08: call dword ptr [ebx + esi*4 + 8]
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0xb3
        __asm _emit 0x08
        ; Exact mapped bytes EB C3: jmp 0x46526f
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes 64 8F 05 00 00 00 00: pop dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        ret
    }
}
