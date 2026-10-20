// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9890 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004c9890_004C9890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 51: je 0x4c98f3
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 47 F9 FF: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x4c98f3
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 47 F9 FF: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0ffh
        ; Exact mapped bytes 74 1F: je 0x4c98f3
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 41 F9 FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D 40 F9 FF: call 0x45d920
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
