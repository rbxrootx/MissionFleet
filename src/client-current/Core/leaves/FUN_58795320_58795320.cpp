// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58795320 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58795320_58795320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes F2 0F 10 05 28 6C 8B 58: movsd xmm0, qword ptr [0x588b6c28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 DC: movsd qword ptr [ebp - 0x24], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 2A 45 08: cvtsi2sd xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 59 45 DC: mulsd xmm0, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes F2 0F 2A 45 0C: cvtsi2sd xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 59 45 DC: mulsd xmm0, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0f4240h
        ; Exact mapped bytes 7E 07: jle 0x58795368
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 7fffffffh
        cmp dword ptr [ebp + 0ch], 0f4240h
        ; Exact mapped bytes 7E 07: jle 0x58795378
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 7fffffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
