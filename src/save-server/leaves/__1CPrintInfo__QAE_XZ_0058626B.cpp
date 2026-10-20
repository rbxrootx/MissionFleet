// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058626B .. +0xA9 bytes.
extern "C" __declspec(naked) void __1CPrintInfo__QAE_XZ_0058626B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fbdeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2F: je 0x5862c7
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 21: je 0x5862c7
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 AC B5 68 00: call dword ptr [0x68b5ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x5862ed
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1ch
        ; Exact mapped bytes E8 E6 65 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
