// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500570 .. +0xE3 bytes.
extern "C" __declspec(naked) void _Dump_CControlBar__UBEXAAVCDumpContext___Z_00500570() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 05 FD FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 6756b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F9 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 6756cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        push eax
        push 6756e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 6756f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A8 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        push 67570ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8D 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        push 675720h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 72 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 675730h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 82 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 57 84 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        push 675744h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 81 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
