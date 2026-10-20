// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521500 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58521500_58521500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 7D FE FF: call 0x58509240
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 23: jl 0x58521540
        __asm _emit 0x7c
        __asm _emit 0x23
        ; Exact mapped bytes 7F 06: jg 0x58521525
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 76 1B: jbe 0x58521540
        __asm _emit 0x76
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 9E FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [eax]
        movzx ecx, al
        push ecx
        ; Exact mapped bytes E8 48 3F FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 10: jmp 0x58521550
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
