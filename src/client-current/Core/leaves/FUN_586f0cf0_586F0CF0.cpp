// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F0CF0 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_586f0cf0_586F0CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        shl ecx, 0
        movzx eax, word ptr [eax + ecx + 8]
        xor eax, 55h
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0ah
        ; Exact mapped bytes 7E 0A: jle 0x586f0d3f
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 0ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3E A4 0C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ch], edx
        push 0ah
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B A4 0C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        add edx, 0c8h
        imul eax, edx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 A3 0C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
