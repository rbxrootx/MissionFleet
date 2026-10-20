// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850670 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_58850670_58850670() {
    __asm {
        push ebx
        push esi
        push edi
        mov eax, dword ptr [esp + 10h]
        push ebp
        push eax
        push -2
        push 58850620h
        ; Exact mapped bytes 64 FF 35 00 00 00 00: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 4]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 0ch]
        cmp esi, -1
        ; Exact mapped bytes 0F 84 49 00 00 00: je 0x588506f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 2ch], -1
        ; Exact mapped bytes 0F 84 0A 00 00 00: je 0x588506c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 0F 86 34 00 00 00: jbe 0x588506f5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [esi + esi*2]
        mov ecx, dword ptr [ebx + esi*4]
        mov dword ptr [esp + 0ch], ecx
        mov dword ptr [eax + 0ch], ecx
        cmp dword ptr [ebx + esi*4 + 4], 0
        ; Exact mapped bytes 0F 85 17 00 00 00: jne 0x588506f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 101h
        mov eax, dword ptr [ebx + esi*4 + 8]
        ; Exact mapped bytes E8 39 00 00 00: call 0x58850720
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + esi*4 + 8]
        ; Exact mapped bytes E8 50 00 00 00: call 0x58850740
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 FF FF FF: jmp 0x58850699
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        ret
    }
}
