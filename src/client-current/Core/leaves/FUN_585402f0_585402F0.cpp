// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585402F0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_585402f0_585402F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2f0h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x58540340
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 66 F4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x58540331
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 E4 FF FF: call 0x5853e760
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x58540338
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C5: jmp 0x58540305
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 2f4h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 2f8h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 2f0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
