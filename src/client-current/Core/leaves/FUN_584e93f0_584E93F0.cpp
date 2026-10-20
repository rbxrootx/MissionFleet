// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E93F0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_584e93f0_584E93F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584e9415
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 6A: je 0x584e9485
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 64h], 0
        ; Exact mapped bytes 74 27: je 0x584e944f
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A1 CA F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 64h]
        ; Exact mapped bytes E8 52 D5 F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 5ch], 0
        ; Exact mapped bytes 74 27: je 0x584e9483
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5ch]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D CA F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5ch]
        ; Exact mapped bytes E8 1E D5 F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 87: jmp 0x584e940c
        __asm _emit 0xeb
        __asm _emit 0x87
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 14: je 0x584e94a2
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 54h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 14: je 0x584e94bf
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 58h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
