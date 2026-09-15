
// Exact recovered large bitfield transformation.
extern "C" __declspec(naked) void Recovered00473CF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x30
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm add eax, 0x17
    __asm and al, 0xf0
    __asm mov dword ptr [ebp - 0x1c], eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 0x10]
    __asm mov dword ptr [ebp - 0x30], edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, dword ptr [eax + 0xc]
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm shr edx, 0xf
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm imul eax, eax, 0x204
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm lea edx, [ecx + eax + 0x144]
    __asm mov dword ptr [ebp - 8], edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm sub eax, 4
    __asm mov dword ptr [ebp - 0x14], eax
    __asm mov ecx, dword ptr [ebp - 0x14]
    __asm mov edx, dword ptr [ecx]
    __asm sub edx, 1
    __asm mov dword ptr [ebp - 0x28], edx
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm add eax, dword ptr [ebp - 0x28]
    __asm mov dword ptr [ebp - 0x2c], eax
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 0x10], edx
    __asm mov eax, dword ptr [ebp - 0x1c]
    __asm cmp eax, dword ptr [ebp - 0x28]
    __asm jle loc_00474016
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm and ecx, 1
    __asm test ecx, ecx
    __asm jne loc_00473D7B
    __asm mov edx, dword ptr [ebp - 0x28]
    __asm add edx, dword ptr [ebp - 0x10]
    __asm cmp dword ptr [ebp - 0x1c], edx
    __asm jle loc_00473D82
loc_00473D7B:
    __asm xor eax, eax
    __asm jmp loc_004742D7
loc_00473D82:
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm sar eax, 4
    __asm sub eax, 1
    __asm mov dword ptr [ebp - 0x20], eax
    __asm cmp dword ptr [ebp - 0x20], 0x3f
    __asm jbe loc_00473D9B
    __asm mov dword ptr [ebp - 0x20], 0x3f
loc_00473D9B:
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ebp - 0x2c]
    __asm mov eax, dword ptr [ecx + 4]
    __asm cmp eax, dword ptr [edx + 8]
    __asm jne loc_00473E7D
    __asm cmp dword ptr [ebp - 0x20], 0x20
    __asm jae loc_00473E12
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr edx, cl
    __asm not edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm mov eax, dword ptr [ecx + eax*4 + 0x44]
    __asm and eax, edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov dword ptr [edx + ecx*4 + 0x44], eax
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov cl, byte ptr [eax + 4]
    __asm sub cl, 1
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x20]
    __asm mov byte ptr [edx + 4], cl
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm movsx ecx, byte ptr [eax + 4]
    __asm test ecx, ecx
    __asm jne loc_00473E10
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr edx, cl
    __asm not edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm and ecx, edx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx], ecx
loc_00473E10:
    __asm jmp loc_00473E7D
loc_00473E12:
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm not eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov ecx, dword ptr [edx + ecx*4 + 0xc4]
    __asm and ecx, eax
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm mov dword ptr [eax + edx*4 + 0xc4], ecx
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm mov dl, byte ptr [ecx + 4]
    __asm sub dl, 1
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov byte ptr [eax + 4], dl
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm movsx edx, byte ptr [ecx + 4]
    __asm test edx, edx
    __asm jne loc_00473E7D
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm not eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm and edx, eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [eax + 4], edx
loc_00473E7D:
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [edx + 4], ecx
    __asm mov edx, dword ptr [ebp - 0x2c]
    __asm mov eax, dword ptr [edx + 4]
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov dword ptr [eax + 8], edx
    __asm mov eax, dword ptr [ebp - 0x28]
    __asm add eax, dword ptr [ebp - 0x10]
    __asm sub eax, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [ebp - 0x10], eax
    __asm cmp dword ptr [ebp - 0x10], 0
    __asm jle loc_00473FF7
    __asm mov ecx, dword ptr [ebp - 0x14]
    __asm add ecx, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [ebp - 0x2c], ecx
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm sar edx, 4
    __asm sub edx, 1
    __asm mov dword ptr [ebp - 0x20], edx
    __asm cmp dword ptr [ebp - 0x20], 0x3f
    __asm jbe loc_00473ED3
    __asm mov dword ptr [ebp - 0x20], 0x3f
loc_00473ED3:
    __asm mov eax, dword ptr [ebp - 0x20]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm lea edx, [ecx + eax*8]
    __asm mov dword ptr [ebp - 0x18], edx
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov ecx, dword ptr [ebp - 0x18]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov dword ptr [eax + 4], edx
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov ecx, dword ptr [ebp - 0x18]
    __asm mov dword ptr [eax + 8], ecx
    __asm mov edx, dword ptr [ebp - 0x18]
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov dword ptr [edx + 4], eax
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov dword ptr [edx + 8], eax
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ebp - 0x2c]
    __asm mov eax, dword ptr [ecx + 4]
    __asm cmp eax, dword ptr [edx + 8]
    __asm jne loc_00473FE3
    __asm cmp dword ptr [ebp - 0x20], 0x20
    __asm jae loc_00473F7C
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm movsx edx, byte ptr [ecx + 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov cl, byte ptr [eax + 4]
    __asm add cl, 1
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov byte ptr [eax + 4], cl
    __asm test edx, edx
    __asm jne loc_00473F5A
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr edx, cl
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm or ecx, edx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx], ecx
loc_00473F5A:
    __asm mov eax, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov ecx, dword ptr [edx + ecx*4 + 0x44]
    __asm or ecx, eax
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm mov dword ptr [eax + edx*4 + 0x44], ecx
    __asm jmp loc_00473FE3
loc_00473F7C:
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm movsx edx, byte ptr [ecx + 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov cl, byte ptr [eax + 4]
    __asm add cl, 1
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov byte ptr [eax + 4], cl
    __asm test edx, edx
    __asm jne loc_00473FBA
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov edx, 0x80000000
    __asm shr edx, cl
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 4]
    __asm or ecx, edx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 4], ecx
loc_00473FBA:
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov ecx, dword ptr [edx + ecx*4 + 0xc4]
    __asm or ecx, eax
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm mov dword ptr [eax + edx*4 + 0xc4], ecx
loc_00473FE3:
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [ecx], edx
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm add eax, dword ptr [ebp - 0x10]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax - 4], ecx
loc_00473FF7:
    __asm mov edx, dword ptr [ebp - 0x1c]
    __asm add edx, 1
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov dword ptr [eax], edx
    __asm mov ecx, dword ptr [ebp - 0x1c]
    __asm add ecx, 1
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm add edx, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [edx - 4], ecx
    __asm jmp loc_004742D2
loc_00474016:
    __asm mov eax, dword ptr [ebp - 0x1c]
    __asm cmp eax, dword ptr [ebp - 0x28]
    __asm jge loc_004742D2
    __asm mov ecx, dword ptr [ebp - 0x1c]
    __asm add ecx, 1
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov dword ptr [edx], ecx
    __asm mov eax, dword ptr [ebp - 0x1c]
    __asm add eax, 1
    __asm mov ecx, dword ptr [ebp - 0x14]
    __asm add ecx, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [ecx - 4], eax
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm add edx, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [ebp - 0x14], edx
    __asm mov eax, dword ptr [ebp - 0x28]
    __asm sub eax, dword ptr [ebp - 0x1c]
    __asm mov dword ptr [ebp - 0x28], eax
    __asm mov ecx, dword ptr [ebp - 0x28]
    __asm sar ecx, 4
    __asm sub ecx, 1
    __asm mov dword ptr [ebp - 0x24], ecx
    __asm cmp dword ptr [ebp - 0x24], 0x3f
    __asm jbe loc_00474067
    __asm mov dword ptr [ebp - 0x24], 0x3f
loc_00474067:
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm and edx, 1
    __asm test edx, edx
    __asm jne loc_004741B0
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm sar eax, 4
    __asm sub eax, 1
    __asm mov dword ptr [ebp - 0x20], eax
    __asm cmp dword ptr [ebp - 0x20], 0x3f
    __asm jbe loc_0047408E
    __asm mov dword ptr [ebp - 0x20], 0x3f
loc_0047408E:
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ebp - 0x2c]
    __asm mov eax, dword ptr [ecx + 4]
    __asm cmp eax, dword ptr [edx + 8]
    __asm jne loc_00474170
    __asm cmp dword ptr [ebp - 0x20], 0x20
    __asm jae loc_00474105
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr edx, cl
    __asm not edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm mov eax, dword ptr [ecx + eax*4 + 0x44]
    __asm and eax, edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov dword ptr [edx + ecx*4 + 0x44], eax
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov cl, byte ptr [eax + 4]
    __asm sub cl, 1
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x20]
    __asm mov byte ptr [edx + 4], cl
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm movsx ecx, byte ptr [eax + 4]
    __asm test ecx, ecx
    __asm jne loc_00474103
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm shr edx, cl
    __asm not edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm and ecx, edx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx], ecx
loc_00474103:
    __asm jmp loc_00474170
loc_00474105:
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm not eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov ecx, dword ptr [edx + ecx*4 + 0xc4]
    __asm and ecx, eax
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm mov dword ptr [eax + edx*4 + 0xc4], ecx
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm mov dl, byte ptr [ecx + 4]
    __asm sub dl, 1
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x20]
    __asm mov byte ptr [eax + 4], dl
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm add ecx, dword ptr [ebp - 0x20]
    __asm movsx edx, byte ptr [ecx + 4]
    __asm test edx, edx
    __asm jne loc_00474170
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm not eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm and edx, eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [eax + 4], edx
loc_00474170:
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [edx + 4], ecx
    __asm mov edx, dword ptr [ebp - 0x2c]
    __asm mov eax, dword ptr [edx + 4]
    __asm mov ecx, dword ptr [ebp - 0x2c]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov dword ptr [eax + 8], edx
    __asm mov eax, dword ptr [ebp - 0x28]
    __asm add eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [ebp - 0x28], eax
    __asm mov ecx, dword ptr [ebp - 0x28]
    __asm sar ecx, 4
    __asm sub ecx, 1
    __asm mov dword ptr [ebp - 0x24], ecx
    __asm cmp dword ptr [ebp - 0x24], 0x3f
    __asm jbe loc_004741B0
    __asm mov dword ptr [ebp - 0x24], 0x3f
loc_004741B0:
    __asm mov edx, dword ptr [ebp - 0x24]
    __asm mov eax, dword ptr [ebp - 8]
    __asm lea ecx, [eax + edx*8]
    __asm mov dword ptr [ebp - 0x18], ecx
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov eax, dword ptr [ebp - 0x18]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [edx + 4], ecx
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov eax, dword ptr [ebp - 0x18]
    __asm mov dword ptr [edx + 8], eax
    __asm mov ecx, dword ptr [ebp - 0x18]
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov dword ptr [ecx + 4], edx
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov dword ptr [ecx + 8], edx
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov ecx, dword ptr [ebp - 0x14]
    __asm mov edx, dword ptr [eax + 4]
    __asm cmp edx, dword ptr [ecx + 8]
    __asm jne loc_004742BE
    __asm cmp dword ptr [ebp - 0x24], 0x20
    __asm jae loc_00474258
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x24]
    __asm movsx ecx, byte ptr [eax + 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x24]
    __asm mov al, byte ptr [edx + 4]
    __asm add al, 1
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x24]
    __asm mov byte ptr [edx + 4], al
    __asm test ecx, ecx
    __asm jne loc_00474236
    __asm mov eax, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx]
    __asm or edx, eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [eax], edx
loc_00474236:
    __asm mov edx, 0x80000000
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm shr edx, cl
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm mov eax, dword ptr [ecx + eax*4 + 0x44]
    __asm or eax, edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov dword ptr [edx + ecx*4 + 0x44], eax
    __asm jmp loc_004742BE
loc_00474258:
    __asm mov eax, dword ptr [ebp - 0x30]
    __asm add eax, dword ptr [ebp - 0x24]
    __asm movsx ecx, byte ptr [eax + 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x24]
    __asm mov al, byte ptr [edx + 4]
    __asm add al, 1
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm add edx, dword ptr [ebp - 0x24]
    __asm mov byte ptr [edx + 4], al
    __asm test ecx, ecx
    __asm jne loc_00474295
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm sub ecx, 0x20
    __asm mov eax, 0x80000000
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm or edx, eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [eax + 4], edx
loc_00474295:
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm sub ecx, 0x20
    __asm mov edx, 0x80000000
    __asm shr edx, cl
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0x30]
    __asm mov eax, dword ptr [ecx + eax*4 + 0xc4]
    __asm or eax, edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x30]
    __asm mov dword ptr [edx + ecx*4 + 0xc4], eax
loc_004742BE:
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov ecx, dword ptr [ebp - 0x28]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm add edx, dword ptr [ebp - 0x28]
    __asm mov eax, dword ptr [ebp - 0x28]
    __asm mov dword ptr [edx - 4], eax
loc_004742D2:
    __asm mov eax, 1
loc_004742D7:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
