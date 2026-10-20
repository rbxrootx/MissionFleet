// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E94D0 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_584e94d0_584E94D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 24: je 0x584e9506
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8], edx
        push 418h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3B 7B 34 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 54h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 58h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 98 C9 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C C9 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 C9 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 44 C9 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 7ah]
        cmp ecx, 3
        ; Exact mapped bytes 75 0C: jne 0x584e95b5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        ; Exact mapped bytes EB 10: jmp 0x584e95c5
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 7ah], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC EE FF FF: call 0x584e84b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
