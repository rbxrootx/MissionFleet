// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BEDB0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_584bedb0_584BEDB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 55: je 0x584bee14
        __asm _emit 0x74
        __asm _emit 0x55
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 71 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3b4h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 71 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 0ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 48 67 2F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x67
        __asm _emit 0x2f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3b4h]
        mov dword ptr [ebp - 10h], edx
        push 40000000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7F FF FF FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4D: jmp 0x584bee61
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 70 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3b4h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC 70 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 66 2F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3b4h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 30 FF FF FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
