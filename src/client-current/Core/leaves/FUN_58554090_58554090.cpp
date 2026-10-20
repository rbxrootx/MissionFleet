// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58554090 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_58554090_58554090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585540ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 40: jae 0x585540f1
        __asm _emit 0x73
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 31: je 0x585540ef
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 89 DF FD FF: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 DE FF FF: call 0x58551fb0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B1: jmp 0x585540a2
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
