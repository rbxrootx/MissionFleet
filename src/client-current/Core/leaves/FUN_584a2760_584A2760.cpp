// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2760 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_584a2760_584A2760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F BE 42 0D: movsx eax, byte ptr [edx + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x0d
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x584a27b0
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 0D: movsx edx, byte ptr [ecx + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x0d
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x584a27a6
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0A: jne 0x584a27a6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB D3: jmp 0x584a2779
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 16: jmp 0x584a27c6
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 12 0D 00 00: call 0x584a34d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
