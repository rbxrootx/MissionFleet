// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD99F .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004cd99f_004CD99F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 4D 0C: movsx ecx, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 74 59: je 0x4cda14
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 FD 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 34 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 30: jae 0x4cda14
        __asm _emit 0x73
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 55 08: movsx edx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x08
        cmp ecx, edx
        ; Exact mapped bytes 75 11: jne 0x4cda03
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 74 F6 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C8: jmp 0x4cd9dc
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
