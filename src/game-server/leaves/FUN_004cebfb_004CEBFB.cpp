// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEBFB .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004cebfb_004CEBFB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4A EB 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x4cec5a
        __asm _emit 0x74
        __asm _emit 0x34
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
        ; Exact mapped bytes 75 0E: jne 0x4cec42
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x4cec40
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x4cec49
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 2E E4 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C2: jmp 0x4cec1c
        __asm _emit 0xeb
        __asm _emit 0xc2
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x4cec79
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        sub esi, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 22 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
