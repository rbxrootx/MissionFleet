// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58686F00 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_58686f00_58686F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0ach]
        ; Exact mapped bytes E8 70 01 E5 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, 270fh
        ; Exact mapped bytes 7F 3E: jg 0x58686f65
        __asm _emit 0x7f
        __asm _emit 0x3e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        ; Exact mapped bytes E8 3D 01 E5 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE 04 F0 FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58686f88
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 10h], edx
        push 270fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 04 F0 FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0ach]
        ; Exact mapped bytes E8 F1 00 E5 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, 270fh
        ; Exact mapped bytes 7F 3E: jg 0x58686fe4
        __asm _emit 0x7f
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 18h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        ; Exact mapped bytes E8 BE 00 E5 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7F 04 F0 FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58687007
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        push 270fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5A 04 F0 FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
