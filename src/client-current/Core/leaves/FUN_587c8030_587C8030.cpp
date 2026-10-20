// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8030 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_587c8030_587C8030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB FA FF FF: call 0x587c7b40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587c8058
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 D8 CC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xcc
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 40: jge 0x587c80a5
        __asm _emit 0x7d
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [edx + 124h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 11 45 EC: movsd qword ptr [ebp - 0x14], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes E8 4D D8 CC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd8
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 10 4D EC: movsd xmm1, qword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes F2 0F 5E C8: divsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C C9: cvttsd2si ecx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc9
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 130h], ecx
        ; Exact mapped bytes EB AA: jmp 0x587c804f
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587c80b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 D7 CC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xcc
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 3E: jge 0x587c8102
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [edx + 128h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes E8 CE D7 CC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd7
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 10 4D E4: movsd xmm1, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 5E C8: divsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C C9: cvttsd2si ecx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1130h], ecx
        ; Exact mapped bytes EB AC: jmp 0x587c80ae
        __asm _emit 0xeb
        __asm _emit 0xac
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
