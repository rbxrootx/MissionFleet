// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854D640 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5854d640_5854D640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 4], cl
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5854d664
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 66: jge 0x5854d6d0
        __asm _emit 0x7d
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [ebp - 0ch], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C 88 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 88 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 58h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2B 88 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], 1
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 FE FF FF: call 0x5854d5b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8B: jmp 0x5854d65b
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
