// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057840E .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0057840e_0057840E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 2D: je 0x578450
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 15: je 0x578444
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x578444
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 90 EB F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 2D: je 0x57848b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 15: je 0x57847f
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x57847f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 55 EB F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 98h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
