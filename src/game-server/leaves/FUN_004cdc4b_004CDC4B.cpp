// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDC4B .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004cdc4b_004CDC4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FB FA 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 32 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 38: jae 0x4cdcbf
        __asm _emit 0x73
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        cmp edx, eax
        ; Exact mapped bytes 74 19: je 0x4cdcae
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D8 F3 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C9 F3 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C0: jmp 0x4cdc7f
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 31 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
