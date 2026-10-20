// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58598B50 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_58598b50_58598B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 DE EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xde
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 35 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0xff
        neg eax
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0ch], eax
        imul eax, dword ptr [ebp - 0ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        imul edx, dword ptr [ebp - 10h]
        cmp eax, edx
        ; Exact mapped bytes 7F 1E: jg 0x58598bbd
        __asm _emit 0x7f
        __asm _emit 0x1e
        imul eax, dword ptr [ebp - 0ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        imul edx, dword ptr [ebp - 10h]
        cmp eax, edx
        ; Exact mapped bytes 7C 09: jl 0x58598bbd
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 5D: jne 0x58598c20
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 DD EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 34 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x34
        __asm _emit 0xef
        __asm _emit 0xff
        neg eax
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        imul eax, dword ptr [ebp - 0ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        imul edx, dword ptr [ebp - 10h]
        cmp eax, edx
        ; Exact mapped bytes 7F 1E: jg 0x58598c20
        __asm _emit 0x7f
        __asm _emit 0x1e
        imul eax, dword ptr [ebp - 0ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        imul edx, dword ptr [ebp - 10h]
        cmp eax, edx
        ; Exact mapped bytes 7C 09: jl 0x58598c20
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 09: jne 0x58598c2f
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58598c31
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58598c31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
