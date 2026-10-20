// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD1D3 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004cd1d3_004CD1D3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 F6 FF FF: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 0F: jne 0x4cd1fa
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 7A 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4cd21e
        __asm _emit 0x7e
        __asm _emit 0x14
        push 200h
        push 6714ach
        ; Exact mapped bytes E8 27 BB 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd21e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4cd1fa
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 7A 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [eax + ecx], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
